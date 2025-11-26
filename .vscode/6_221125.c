#include <stdio.h>

int main() {
    int n;
    int A[100], B[100];
    int Trung[100], Khac[100];
    int demtrung = 0, demkhac = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Nhap day A:\n");
    for (int i = 0; i < n; i++) {
        do {
            printf("A[%d] = ", i);
            scanf("%d", &A[i]);
        } while (A[i] > 20);
    }

    printf("Nhap day B:\n");
    for (int i = 0; i < n; i++) {
        do {
            printf("B[%d] = ", i);
            scanf("%d", &B[i]);
        } while (B[i] > 20);
    }

    for (int i = 0; i < n; i++) {
        int c = A[i];
        int found = 0;
        for (int j = 0; j < n; j++) {
            if (c == B[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            Khac[demkhac++] = c;
        }
    }

    for (int i = 0; i < n; i++) {
        int c = A[i];
        for (int j = 0; j < n; j++) {
            if (c == B[j]) {
                Trung[demtrung++] = c;
                break; 
            }
        }
    }

    printf("So co trong A khong co trong B: ");
    for (int i = 0; i < demkhac; i++)
        printf("%d ", Khac[i]);

    printf("\nSo co trong A co trong B: ");
    for (int i = 0; i < demtrung; i++)
        printf("%d ", Trung[i]);

    return 0;
}
