#include <stdio.h>
#include <math.h>

int main() {

    float a = 0,
          x = 0;

    scanf("%f",&a);
    scanf("%f",&x);

    double f,y,g;

    /* Variant 1 */

    printf("a = %1.0f | x = %1.0f ", a, x);

    printf("\n----------- 1 -------------\n");

    g = -(
                (5 * ( a*a * x - 2 * x*x))
                / (20 * a*a + 41 * a * x + 20 * x*x)
            );
    f = cos(a*a+2*a*x-3*x*x);
    y = acos(-45 * a*a - 8 * a*x + 21 * x*x + 1);

    printf("G = %1.2f | ", g);
    printf("F = %1.2f | ", f);
    printf("Y = %1.2f ", y);

    /* Variant 2 */

    printf("\n----------- 2 -------------\n");

    g = (7 * (-15 * a*a + 22 * a * x + 5 * x*x))
        / (4 * a*a + 7 * a * x + 3 * x*x);
    f = -tan(4*a*a - 3 * a * x - 7 * x*x);
    y = acos(-7 * a*a + 20 * a * x + 3 * x*x + 1);

    printf("G = %1.2f | ", g);
    printf("F = %1.2f | ", f);
    printf("Y = %1.2f ", y);

    /* Variant 3 */

    printf("\n----------- 3 -------------\n");

    g = (2 * (56 * a*a - 69 * a * x + 18 *x*x))
        / (6 * a*a + 25 * a * x + 24 *x*x);
    f = 1 / cos(40 * a*a - 27 * a * x - 7 * x*x);
    y = -atan(10*a*a - 17 * a * x - 63 * x*x);

    printf("G = %1.2f | ", g);
    printf("F = %1.2f | ", f);
    printf("Y = %1.2f ", y);


    return 0;
}
