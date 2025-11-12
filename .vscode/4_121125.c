#include <stdio.h>

int main() {
    int n, x, k;
    int a[101];
    printf("Nhap so luong phan tu (n < 100): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Nhap x va k: ");
    scanf("%d %d", &x, &k);
    if (k > n) k = n+1;
    for (int i = n; i >= k; i--)
        a[i] = a[i - 1];
    a[k-1] = x;
    n++;

    printf("Day sau khi chen: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
