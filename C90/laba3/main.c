#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double sx, ex, x, a, G, F, Y, step, start_result, end_result;
    const double pi = 3.14;
    char Function, off;
    for (;;) { /*start*/
        printf("Введите начальное значение Х:");
        scanf("%lf", &sx);
        printf("Введите конечное значение Х:");
        scanf("%lf", &ex);
        printf("Введите значение A:");
        scanf("%lf", &a);
        printf("Введите размер шага:");
        scanf("%lf", &step);
        for(;;) { /*funk*/
            printf("Введите название функции(G, F, Y):\n");
            scanf("%s", &Function);

            switch (Function) {
                case 'G':
                    start_result = (9*(7*a*a + 39 * a * (sx-1) + 20 * (sx-1) * (sx-1))) /
                                   (9 * a*a + 59 * a * (sx-1) + 30 * (sx-1) * (sx-1));
                    for (x = sx; x <= ex; x += step)
                            if ((9 * a*a + 59 * a * x + 30 * x*x) != 0) {
                            G = (9*(7*a*a + 39 * a * x + 20 * x*x)) /
                            (9 * a*a + 59 * a * x + 30 * x*x);
                            printf("При Х = %lf, A = %lf, G = %lf (step = %lf)\n", x, a, G, step);
                            end_result = G;
                            if ((fabs(end_result - start_result) >= 1) && (step >= 0.1))
                                step = step / 2;
                            if ((fabs(end_result - start_result) <= 0.3) && (step <= 2))
                                step = step * 2;
                            start_result = G;
                        } else
                            printf("При X = %lf, A = %lf, функцию вычислить невозможно.\n", x, a);
                    break;
                case 'F':
                    start_result = atan(10*a*a - 43 * a * (sx-1) + 28 * (sx-1) * (sx-1));
                    for (x = sx; x <= ex; x += step)
                            if (atan(10*a*a - 43 * a * x + 28 * x*x) != 0) {
                            F = atan(10*a*a - 43 * a * x + 28 * x*x);
                            printf("При Х = %lf, A = %lf, F = %lf (step = %lf)\n", x, a, F, step);
                            end_result = F;
                            if ((fabs(end_result - start_result) >= 1) && (step >= 0.1))
                                step = step / 2;
                            if ((fabs(end_result - start_result) <= 0.3) && (step <= 2))
                                step = step * 2;
                            start_result = F;
                        } else
                            printf("При X = %lf, A = %lf, функцию вычислить невозможно.\n", x, a);
                    break;
                case 'Y':
                    start_result = log(-10 * a * a + 27 * a * (sx-1) + 28 * (sx-1) * (sx-1) + 1) / log(10);
                    for (x = sx; x <= ex; x += step)
                          if ((log(-10*a*a + 27 *a*x + 28 * x*x + 1)) / log(10) < 0) {
                            Y = log(-10*a*a + 27 *a*x + 28 * x*x + 1) / log(10);
                            printf("При Х = %lf, A = %lf, Y = %lf (step = %lf)\n", x, a, Y, step);
                            end_result = Y;
                            if ((fabs(end_result - start_result) >= 1) && (step >= 0.1))
                                step = step / 2;
                            if ((fabs(end_result - start_result) <= 0.3) && (step <= 2))
                                step = step * 2;
                            start_result = Y;
                        } else
                            printf("При X = %lf, A = %lf, функцию вычислить невозможно.\n", x, a);
                    break;
                default:
                    printf("Неправильно выбрана функция.");
                    continue;
            }
            break;
        }
        for(;;) { /*off*/
            printf("Продолжить работу программы?(y/n)\n");
            scanf("%s", &off);
            switch (off) {
                case 'y':
                    break;
                case 'n':
                    exit(0);
                default:
                    printf("Неправильно введен ответ.");
                    continue;
            }
            break;
        }
    }
}
