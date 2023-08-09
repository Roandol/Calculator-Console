#include <string>

using namespace std;

//Retorna uma mensagem no terminal para o usuário.
void saida(string TextOut);

//Retorna uma mensagem no terminal para o usuário. Com o resultado da operação.
void resultadoSaida(string operacao, int value);

//Limpa os dados de entrada.
void clearCin();

//Limpa o console.
void clearConsole();

//Exibe um menu de interação do usuário e retorna a opção escolhida.
int menu();