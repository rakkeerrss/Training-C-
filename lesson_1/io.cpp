#include <iostream>

void writeAnswer(int add)                                   //Выводит результат на экран
{
    std::cout << "result = " << add << std::endl;
    std::cin >> add;
}

int readNumber()                                            //Получает числа от пользователя
{
    int number;
    std::cout << "Please, enter a number: ";
    std::cin >> number;
    return number;
}