#include "../include/calculator.h"
#include "../include/funcoes.h"

int Calculator::somar()
{
    return x + y;
};

int Calculator::multiplicar()
{
    return x * y;
};

int Calculator::dividir()
{
    if (x && y)
        return x / y;

    return 0;
};

void Calculator::setXY(int _x, int _y)
{
    x = _x;
    y = _y;
};