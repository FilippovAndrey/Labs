#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    struct   /*объявляется структура, в которой будут храниться значения функций*/
    {
        double G[100];
        double F[100];
        double Y[100];
    }data;

    char enter[100];
    double a, x, x2, step;
    const double pi = 3.14;
    double memory[1];
    int i = 0;

    printf("Введите X: ");
    scanf("%s", enter);
    x = atof(enter);
    getchar();
    memset(enter, 0, 100);
    printf("Введите предел Х: ");
    scanf("%s", enter);
    x2 = atof(enter);
    getchar();
    memset(enter, 0, 100);
    printf("Введите а: ");
    scanf("%s", enter);
    a = atof(enter);
    getchar();
    memset(enter, 0, 100);
    printf("Введите шаг: ");
    scanf("%s", enter);
    step = atof(enter);
    getchar();
    memset(enter, 0, 100);

    memory[0] = x;   /*Границы для подсчета функции записываются в отдельный массив их 2 ячеек, потому как после
 * подсчета функции, значения этих переменных поменяются. После цикла им присваиваются сохраненные значения,
 * а так же обнуляется переменная-итератор(i), которая нужна для предохранения от перезаполнения массива.*/
    memory[1] = x2;

    while (x < x2)
    {
        data.G[i] = (9*(7*a*a + 39 * a * x + 20 * x*x)) /
                                (9 * a*a + 59 * a * x + 30 * x*x);
        printf("G = %f\n", data.G[i]);
        i++;
        if (i > 100)
        {
            printf("Ошибка! Массив переполнен.");
            break;
        }
        x = x + step;
        if (x >= x2) {
            break;
        }
    }
    printf("=============================================================================\n");

    i = 0;
    x = memory[0];
    x2 = memory[1];

    while (x < x2)
    {
        data.F[i] = atan(10*a*a - 43 * a * x + 28 * x*x);
        printf("F = %f\n", data.F[i]);
        i++;
        if (i > 100)
        {
            printf("Ошибка! Массив переполнен.");
            break;
        }
        x = x + step;
        if (x >= x2) {
            break;
        }
    }
    printf("=============================================================================\n");

    i = 0;
    x = memory[0];
    x2 = memory[1];

    while (x < x2)
    {
            data.Y[i] = log(-10*a*a + 27 *a*x + 28 * x*x + 1) / log(10);
            printf("Y = %f\n", data.Y[i]);
        i++;
        if (i > 100)
        {
            printf("Ошибка! Массив переполнен.");
            break;
        }
        x = x + step;
        if (x >= x2) {
            break;
        }
    }

    return 0;
}
