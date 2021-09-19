#include <stdio.h>
#include <math.h>

extern double x, result;
int main()
{
    f();
    printf("%lf\n", result);
    x = 3.0051;
    f();
    printf("%lf\n", result);
    scanf_s("%lf", &x);
    f();
    printf("%lf\n", result);
}


