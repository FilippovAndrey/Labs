#include <stdio.h>
#include <math.h>

int main() {

    float a = 0,
          x = 0;

    scanf("%f",&a);
    scanf("%f",&x);

    double g,f,y;
    int s;
    /* Variant 34 */

    printf("a = %1.0f | x = %1.0f \n\n", a, x);
    printf("Введите номер функции которую нужно вызвать: 1 - G | 2 - F | 3 - Y\n");
    scanf("%d",&s);

    printf("\n----------- 34 -------------\n");

    switch(s)
    {
        case 1: {
            g = (9*(7*a*a + 39 * a * x + 20 * x*x)) /
                (9 * a*a + 59 * a * x + 30 * x*x), printf("G = %1.2f", g);
            break;
        }
        case 2: {
            f = atan(10*a*a - 43 * a * x + 28 * x*x);
            printf("F = %1.2f", f);
            break;
        }
        case 3: {
            y = (log(-10*a*a + 27 *a*x + 28 * x*x + 1)) / log(10);
            printf("Y = %1.2f", y);
            break;
        }
        default: printf("Неизвестное значение!");
    }

    /*
     * printf("G = %1.2f | ", g);
     * printf("F = %1.2f | ", f);
     * printf("Y = %1.2f ", y);
    */
    return 0;
}
