#include <stdio.h>

void main() {
    int n,count = 0;
    int a[100];
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i < n - 1; i++) {
        if (a[i] == (a[i - 1] + a[i + 1]) / 2)
            count+=1;
    }

    printf("So bo ba thoa man la: %d\n", count);
}