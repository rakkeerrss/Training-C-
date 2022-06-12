/**
 * @file main.cpp
 * @author PANADOL (rakkerrss@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "io.h"

/**
 * Программа складывает несколько чисел, которые вводит пользователь
 * И выводит результат
 * io.h директива предпроцессора которая делает предварительное объявление функциям io.cpp
 * io.cpp имеет две функции одна получает число, другая выводит результат
 */

int main()
{
    int number1 = readNumber();
    int number2 = readNumber();
    writeAnswer(number1 + number2);
}