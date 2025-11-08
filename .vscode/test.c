#include <stdio.h>

int main(void) {
    int i, sum=0, count=0, min=9999, max=-9999;
    char c;

    do {
        printf("\nNhap mot so (hoac q de thoat): ");
        scanf(" %c", &c);

        if(c=='q' || c=='Q') break;

        if(c >= '0' && c <= '9') {
            i = c - '0';
            sum += i;
            count++;
            if(i > max) max = i;
            if(i < min) min = i;
        } else {
            printf("Khong phai so!\n");
        }
    } while(1);

        printf("\nTong: %d\n", sum);
        printf("Trung binh: %.2f\n", (float)sum/count);
        printf("Min: %d, Max: %d\n", min, max);

    return 0;
}
