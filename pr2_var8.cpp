#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
    SetConsoleOutputCP(1251);
    
    double x, y;
    double z = -0.03298;
    double w;
    double t1, t2;
    
    //Ввод данных
    printf("Введите x, y:\n");
    scanf("%lf %lf", &x, &y);
    
    t1 = fabs(pow(x, y / x) - pow(y / x, 1 / 3));
    t2 = (y - x) * ((cos(y) - (z / (y - x))) / (1 + pow(y - x, 2)));
    w = t1 + t2;
    
    //Вывод ответа
    printf("w = %lg\n", w);

    return 0;
}

