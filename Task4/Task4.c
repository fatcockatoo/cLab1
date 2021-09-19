#include <stdio.h>
#include <math.h>
double x, result;

void f() {

    result = pow(((x + 3) / (x - 3)), 0.5);

}

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


