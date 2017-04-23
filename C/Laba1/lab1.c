#include <stdio.h>
#include <math.h>

int main() {

    float a = 0,
          x = 0;

    scanf("%f",&a);
    scanf("%f",&x);

    double f,y,g;

    /* Variant 34 */

    printf("a = %1.0f | x = %1.0f ", a, x);

    printf("\n----------- 34 -------------\n");

    g = (9*(7*a*a + 39 * a * x + 20 * x*x)) /
            (9 * a*a + 59 * a * x + 30 * x*x);
    f = atan(10*a*a - 43 * a * x + 28 * x*x);
    y = (log(-10*a*a + 27 *a*x + 28 * x*x + 1)) / log(10);

    printf("G = %1.2f | ", g);
    printf("F = %1.2f | ", f);
    printf("Y = %1.2f ", y);

    return 0;
}
