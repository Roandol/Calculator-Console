#include "../include/funcoes.h"
#include <iostream>
#include <string>

using namespace std;

void saida(string TextOut)
{
    cout << TextOut;
};

void resultadoSaida(string operacao, int value)
{
    saida("\nA" + operacao + "dos números é igual a: " + to_string(value) + "\n");
}

void clearCin()
{
    cin.clear();
    cin.ignore(1000, '\n');
};

void clearConsole()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
};

int menu()
{
    int opcao;
    int opcaoMax = 3;

    do
    {
        saida("\nSelecione uma opcao no menu abaixo.\n\n");
        saida("+-------------+\n");
        saida("| (1) - Somar\n");
        saida("| (2) - Multiplicar\n");
        saida("| (3) - Dividir\n\n");
        saida("| (0) - Sair do App.\n");
        saida("+-------------+\n");

        cin >> opcao;

        if (!cin || opcao < 0 || opcao > opcaoMax)
        {
            clearConsole();
            saida("\nOpção inválida. Favor selecionar corretamente conforme o menu.\n");
            clearCin();
        }

    } while (!cin || opcao < 0 || opcao > opcaoMax);

    return opcao;
}
