#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    /*== var ==*/
    double x_s, x_e,
            x, a,
            G, F, Y,
            step,
            result_s, result_e;
    char sw, off;
    /*== start ==*/
        begin:
        printf("\nВведите начальное значение Х:");
        scanf("%lf", &x_s);
        printf("Введите конечное значение Х:");
        scanf("%lf", &x_e);
        if(x_s > x_e) {
            printf("Начальное значение не может быть больше конечного!");
            goto begin;
        }
        printf("Введите значение A:");
        scanf("%lf", &a);
        printf("Введите размер шага:");
        scanf("%lf", &step);

        for(;;) {
            printf("Введите название функции(G, F, Y):\n");
            scanf("%s", &sw);

            switch (sw) {
                case 'g':
                case 'G':
                    result_s = (9*(7*a*a + 39 * a * (x_s-1) + 20 * (x_s-1) * (x_s-1))) /
                                   (9 * a*a + 59 * a * (x_s-1) + 30 * (x_s-1) * (x_s-1));
                    for (x = x_s; x <= x_e; x += step)
                        if ((9 * a*a + 59 * a * x + 30 * x*x) != 0) {
                            G = (9*(7*a*a + 39 * a * x + 20 * x*x)) /
                                (9 * a*a + 59 * a * x + 30 * x*x);
                            printf("При Х = %lf, A = %lf, G = %lf (step = %lf)\n", x, a, G, step);
                            result_e = G;
                            if ((fabs(result_e - result_s) >= 1) && (step >= 0.1))
                                step = step / 2;
                            if ((fabs(result_e - result_s) <= 0.3) && (step <= 2))
                                step = step * 2;
                            result_s = G;
                        } else {
                            printf("При X = %lf, A = %lf, функцию вычислить невозможно.\n", x, a);
                            break;
                        }
                    break;
                case 'f':
                case 'F':
                    result_s = atan(10*a*a - 43 * a * (x_s-1) + 28 * (x_s-1) * (x_s-1));
                    for (x = x_s; x <= x_e; x += step)
                        if (atan(10*a*a - 43 * a * x + 28 * x*x) != 0) {
                            F = atan(10*a*a - 43 * a * x + 28 * x*x);
                            printf("При Х = %lf, A = %lf, F = %lf (step = %lf)\n", x, a, F, step);
                            result_e = F;
                            if ((fabs(result_e - result_s) >= 1) && (step >= 0.1))
                                step = step / 2;
                            if ((fabs(result_e - result_s) <= 0.3) && (step <= 2))
                                step = step * 2;
                            result_s = F;
                        } else {
                            printf("При X = %lf, A = %lf, функцию вычислить невозможно.\n", x, a);
                            break;
                        }
                    break;
                case 'y':
                case 'Y':
                    result_s = log(-10 * a * a + 27 * a * (x_s-1) + 28 * (x_s-1) * (x_s-1) + 1) / log(10);
                    for (x = x_s; x <= x_e; x += step)
                        if ((log(-10*a*a + 27 *a*x + 28 * x*x + 1)) / log(10) < 0) {
                            Y = log(-10*a*a + 27 *a*x + 28 * x*x + 1) / log(10);
                            printf("При Х = %lf, A = %lf, Y = %lf (step = %lf)\n", x, a, Y, step);
                            result_e = Y;
                            if ((fabs(result_e - result_s) >= 1) && (step >= 0.1))
                                step = step / 2;
                            if ((fabs(result_e - result_s) <= 0.3) && (step <= 2))
                                step = step * 2;
                            result_s = Y;
                        } else {
                            printf("При X = %lf, A = %lf, функцию вычислить невозможно.\n", x, a);
                            break;
                        }
                    break;
                default:
                    printf("Неправильно выбрана функция.");
                    continue;
            }
            break;
        }
        /*== repeat? ==*/
        for(;;) {
            printf("Продолжить работу программы?(y/n)\n");
            scanf("%s", &off);
            switch (off) {
                case 'Y':
                case 'y':
                    goto begin;
                case 'N':
                case 'n':
                    exit(0);
                default:
                    printf("Неккоректные данные!");
                    continue;
            }

        }
    }