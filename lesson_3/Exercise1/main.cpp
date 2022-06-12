/**
 * @file main.cpp
 * @author PANADOL (rakkerrss@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-13
 * @copyright Copyright (c) 2022
 * Программа просит пользователя ввести целое число, а затем сообщает, является ли его число чётным или нечётным.
 */
#include <iostream>

bool isEven(int number)
{
    return(number % 2 == 0);
}
 
int main()
{
    std::cout << "Enter number: ";
    int number;
    std::cin >> number;
    if (isEven(number))
        std::cout << "Your number " << number << " is even.";
    else
        std::cout << "Your number " << number << " is NOT even.";
}