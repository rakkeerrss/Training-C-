/**
 * @file main.cpp
 * @author PANADOL (rakkerrss@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-13
 * @copyright Copyright (c) 2022
 * 
 * Программа просит пользователя ввести число от 0 до 255 и выводит его как 8-битное двоичное число (в парах по 4 цифры).
 */
#include <iostream>

int enterNumber()                                      // Просит пользователя ввести число от 0 до 255
{
	std::cout << "Enter a number from 0 to 255: ";
    int number;
    std::cin >> number;
	return number;
}
 
int binar(int number, int des)
{
    if (number >= des)                                // Проверяем, является ли number больше определенного числа, умноженного на 2 и выводим бит
	{
        std::cout << "1";
		return number - des;                          // Если number больше, чем число, умноженное на 2, то вычитаем его из значения
	}
    else
        std::cout << "0";
		return number;
}
 
int main()
{
    int number(enterNumber());
 
    number = binar(number, 128);
    number = binar(number, 64);
    number = binar(number, 32);
    number = binar(number, 16);
 
    std::cout << " ";
 
    number = binar(number, 8);
    number = binar(number, 4);
    number = binar(number, 2);
    number = binar(number, 1);
 
    return 0;
}

//(0 * 128) + (1 * 64) + (0 * 32) + (1 * 16) + (1 * 8) + (1 * 4) + (1 * 2) + (0 * 1 ) = 64 + 16 + 8 + 4 + 2 = 94