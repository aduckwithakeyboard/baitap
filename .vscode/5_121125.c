#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    float x[n], y[n];
    printf("Nhap day x:\n");
    for (int i = 0; i < n; i++)
        scanf("%f", &x[i]);

    printf("Nhap day y:\n");
    for (int i = 0; i < n; i++)
        scanf("%f", &y[i]);

    float sum1 = 0;
    for (int i = 0; i < n; i++)
        sum1 += cosf(x[i]) * sinf(x[i]);

    float sum2 = 0;
    for (int i = 0; i < n; i++)
        sum2 += (x[i] - y[i]) * (x[i] - y[i]);
    float result2 = sqrtf(sum2);

    float sum3 = 0;
    for (int i = 0; i < n - 1; i++)
        sum3 += (x[i + 1] * x[i + 1]) / (y[i] + 1);

    printf("a) Tong cos(xi)*sin(xi) = %.4f\n", sum1);
    printf("b) sqrt(tong (xi - yi)^2) = %.4f\n", result2);
    printf("c) Tong x(i+1)^2 / (y(i) + 1) = %.4f\n", sum3);

    return 0;
}
