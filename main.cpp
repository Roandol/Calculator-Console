#include <iostream>
#include <string>
#include "include/calculator.h"
#include "include/funcoes.h"

using namespace std;

int main()
{
    Calculator *calculator = new Calculator();
    int x, y, opcao;
    string expressao;

    clearConsole();
    saida("\nBem-vindo ao seu aplicativo de calculos.\n\n");

    while (true)
    {
        opcao = menu();
        clearConsole();

        if (opcao == 0)
        {
            break;
        }

        saida("\nPor favor insira dois números separados por espaço para calcular\n\n");

        cin >> x >> y;

        while (!cin)
        {
            clearConsole();

            saida("Valores invalidos. Por favor insira novamente os dados\n\n");

            clearCin();

            cin >> x >> y;
        };

        calculator->setXY(x, y);

        clearConsole();

        if (opcao == 1)
            resultadoSaida("soma", calculator->somar());

        else if (opcao == 2)
            resultadoSaida("multiplicação", calculator->multiplicar());

        else if (opcao == 3)
        {
            int result = calculator->dividir();

            if (!result)
                saida("Nao é possível dividir por zero.\n");

            else
                resultadoSaida("divisão", result);
        };
    }

    saida("\nObrigado por usar nosso app.\n");
}