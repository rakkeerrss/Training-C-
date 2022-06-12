/**
 * @file io.h
 * @date 2022-06-02
 * Header guards
 * Защита подключения
 * директивы условной компиляции
 */

#ifndef IO_H            //не было ли значение ранее определено
#define Io_H            //определят значение

//Предварительное объявление к функция io.cpp
void writeAnswer(int add);
int readNumber();

#endif