#include <stdio.h>
#include <math.h>

double F(double x, double y) {
    double num = 1.0 + pow(sin(x + y), 2.0);
    double a = 2.0 * x / (1.0 + x * x * y * y);
    double b = 2.0 + fabs(x - a);
    return num / b + x;
}

int main() {
    double x, y;
    printf("Vvedite x: ");
    scanf_s("%lf", &x);
    printf("Vvedite y: ");
    scanf_s("%lf", &y);

    double result = F(x, y);
    printf("F(%.2f, %.2f) = %.6f\n", x, y, result);

    return 0;
}
