#include <stdio.h>
#include <string.h>

void main()
{
    char HoTen[100];
    char Ho[30], TenDem[50], Ten[30];
    int i, j, len;
    printf("Nhap ho va ten: ");
    gets(HoTen); 
    len = strlen(HoTen);
    i = 0;
    j = 0;
    while (HoTen[i] != ' ' && HoTen[i] != '\0') {
        Ho[j++] = HoTen[i++];
    }
    i++;
    int vitriten = 0;
    for (int k = len; k > 0; k--) {
        if (HoTen[k] == ' ') {
            vitriten = k+1;
            break;
        }
    }

    j = 0;
    for (int k = vitriten; k < len; k++) {
        Ten[j++] = HoTen[k];
    }

    j = 0;
    for (int k = i; k < vitriten; k++) {
        TenDem[j++] = HoTen[k];
    }
    TenDem[j] = '\0';

    printf("Ho: %s\n", Ho);
    printf("Ten dem: %s\n", TenDem);
    printf("Ten: %s\n", Ten);
}