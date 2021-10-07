#include "calculator.h"

// функція для додавання
int Calculator::Add (double a, double b)
{
    return a + b;
}

// функція для віднімання
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

// функція для множення
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
