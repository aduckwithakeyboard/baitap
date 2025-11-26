#include <stdio.h>

int main() {
    int n;
    printf("Nhập số phần tử n: ");
    scanf("%d", &n);

    int A[n], B[n];

    printf("Nhập mảng A (0-20):\n");
    for (int i = 0; i < n; i++) {
        do {
            printf("A[%d]: ", i);
            scanf("%d", &A[i]);
        } while (A[i] < 0 || A[i] > 20);
    }

    printf("Nhập mảng B (0-20):\n");
    for (int i = 0; i < n; i++) {
        do {
            printf("B[%d]: ", i);
            scanf("%d", &B[i]);
        } while (B[i] < 0 || B[i] > 20);
    }

    int inA[21] = {0};
    int inB[21] = {0};

    for (int i = 0; i < n; i++) {
        inA[A[i]] = 1;
        inB[B[i]] = 1;
    }

    printf("\nCác số có trong A nhưng không có trong B:\n");
    int found = 0;
    for (int i = 0; i <= 20; i++) {
        if (inA[i] == 1 && inB[i] == 0) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) printf("Không có số nào");

    printf("\n\nCác số xuất hiện trong cả hai mảng:\n");
    found = 0;
    for (int i = 0; i <= 20; i++) {
        if (inA[i] == 1 && inB[i] == 1) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) printf("Không có số nào");

    return 0;
}
