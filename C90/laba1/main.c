#include <stdio.h>
#include <math.h>
int main()
{
    float G, F, Y, x, a;
    const double pi=3.14;
    scanf("%f", &x);
    scanf("%f", &a);

    G= (9*(7*a*a + 39 * a * x + 20 * x*x))/(9 * a*a + 59 * a * x + 30 * x*x);
    F= atan(10*a*a - 43 * a * x + 28 * x*x);
    Y= log(-10*a*a + 27 *a*x + 28 * x*x + 1) / log(10);

    printf("%1.4f\n", G);
    printf("%1.4f\n", F);
    printf("%1.4f\n", Y);
    return 0;
}
