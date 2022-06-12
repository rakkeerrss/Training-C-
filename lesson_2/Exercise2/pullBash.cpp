/**
 * Просит пользователя обознать высоту башни и возвращает её. 
 */

#include <iostream>

int pullBash()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double getBash;
    std::cin >> getBash;
    return (getBash);
}