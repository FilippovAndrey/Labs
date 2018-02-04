#include <stdio.h>
#include <math.h>

int main() {
    printf("Введите данные\n");

        double G, F, Y, x, a;
        const double pi = 3.14;
        char flag;
        scanf("%lf %lf %c", &x, &a, &flag);
        getchar();
        switch (flag) {
            case ('G'):
                if ((9 * a*a + 59 * a * x + 30 * x*x) > 0) {
                    G = (9*(7*a*a + 39 * a * x + 20 * x*x)) /
                    (9 * a*a + 59 * a * x + 30 * x*x);
                    printf("%lf\n", G);
                } else { printf("Ошибка.Завершение программы\n"); }
            case ('F'):
                if (atan(10*a*a - 43 * a * x + 28 * x*x)) > 0) {
                    F = (atan(10*a*a - 43 * a * x + 28 * x*x));
                    printf("%lf\n", F);
                } else { printf("Ошибка. Завершение программы\n"); }
            case ('Y'):
                if (log(10) > 0) {
                    Y = log(-10*a*a + 27 *a*x + 28 * x*x + 1) / log(10);
                    printf("%lf\n", Y);
                } else { printf("Ошибка. Завершение программы\n"); }
        }

        return 0;
    }
