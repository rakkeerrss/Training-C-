#include <iostream>

int prover (double oneNumber, double twoNumber, char oper)
{
    if (oper == '+')
    {
        double zero(oneNumber + twoNumber);
        std::cout << oneNumber << " + " << twoNumber 
        << " = " << zero;
    }

    if (oper == '-')
    {
        double one(oneNumber - twoNumber);
        std::cout << oneNumber << " - " << twoNumber 
        << " = " << one;
    }

    if (oper == '*')
    {
        double two(oneNumber * twoNumber);
        std::cout << oneNumber << " * " << twoNumber 
        << " = " << two;
    }

    if (oper == '/')
    {
        double del(oneNumber / twoNumber);
        std::cout << oneNumber << " / " << twoNumber 
        << " = " << del;
    }
    int i;
    std::cin >> i;
}


int EnterNumber (double oneNumber, double twoNumber, char oper)
{
    std::cout << "Enter a double value: ";
    std::cin >> oneNumber;
    std::cout << "Enter a double value: ";
    std::cin >> twoNumber;
    std::cout << "Enter one of the following: +, -, *, /: ";
    std::cin >> oper;
    if (oper == '+' || oper == '-' || oper == '*' || oper == '/')
        prover(oneNumber, twoNumber, oper);
    else
        std::cout << "You entered an invalid character:  " << oper;
    return (0);
}