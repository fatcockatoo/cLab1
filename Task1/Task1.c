#include <stdio.h>
#include <math.h>

int main()
{
    double f;
    double x = 5;
    f = pow(((x + 3) / (x - 3)), 0.5);
    printf("%lf\n", f);
    x = 3.0051;
    f = pow(((x + 3) / (x - 3)), 0.5);
    printf("%lf\n", f);
    scanf_s("%lf", &x);
    f = pow(((x + 3) / (x - 3)), 0.5);
    printf("%lf\n", f);
}


