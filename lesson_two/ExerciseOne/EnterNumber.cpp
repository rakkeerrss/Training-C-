#include <iostream>

int prover (double oneNumber, double twoNumber, char oper)
{
    if (oper == 0)
    {
        double zero(oneNumber + twoNumber);
        std::cout << oneNumber << " + " << twoNumber 
        << " = " << zero;
    }

    if (oper == 1)
    {
        double one(oneNumber - twoNumber);
        std::cout << oneNumber << " - " << twoNumber 
        << " = " << one;
    }

    if (oper == 2)
    {
        double two(oneNumber * twoNumber);
        std::cout << oneNumber << " * " << twoNumber 
        << " = " << two;
    }

    if (oper == 3)
    {
        double del(oneNumber / twoNumber);
        std::cout << oneNumber << " / " << twoNumber 
        << " = " << del;
    }
    int i;
    std::cin >> i;
}


int EnterNumber (double oneNumber, double twoNumber, int oper)
{
    std::cout << "Enter a double value: ";
    std::cin >> oneNumber;
    std::cout << "Enter a double value: ";
    std::cin >> twoNumber;
    std::cout << "Enter one of the following: 0 or +, 1 or -, 2 or *5, 3 or /: ";
    std::cin >> oper;
    if (oper <= 3)
        prover(oneNumber, twoNumber, oper);
    else
        std::cout << "You entered an invalid character:  " << oper;
    return (0);
}