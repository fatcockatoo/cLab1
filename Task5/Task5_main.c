#include <stdio.h>
#include <math.h>
double x, result;

double f(double x);

int main()
{
    double x = 5;
    double func = f(x);
    printf("%lf\n", func);
    x = 3.0051;
    func = f(x);
    printf("%lf\n", func);
    scanf_s("%lf", &x);
    func = f(x);
    printf("%lf\n", func);
}


