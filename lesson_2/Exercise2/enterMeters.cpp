/**
 * Принимает высоту башни и по формуле выводит на экран высоту мяча падающего с башни.
 * Выводит высоту 5 раз, от 0 секунды, до 5 секунды.
 */

#include <iostream>
#include "constants.h"                                                                                           // Заголовочный фаил с константой

int enterMeters(double getBash)
{
    for (int second = 0; second <= 5; second++)                                                                 // Цикл на 5 секунд падения
    {
        double enteger = getBash - constants::graw * second * second / 2;                                       // Формула вычисления высоты мяча на каждую секунду
        if (enteger > 0)                                                                                        // Если высота меча не ниже 0м, то выводим высоту
            std::cout << "At " << second << " seconds, the ball is at height: " << enteger << " meters\n";
        else                                                                                                    // Иначе пишем что мяч упал на землю
            std::cout << "At " << second << " seconds, the ball is no the ground.\n";
    }
    std::cin >> getBash;                                                                                        // Чтобы консоль не закрывалась))
    return 0;
}