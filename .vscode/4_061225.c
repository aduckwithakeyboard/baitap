#include <stdio.h>
#include <string.h>

void main()
{
    char HoTen[100];
    int soKyTu = 0, soTu = 0;
    printf("\nnhap ho ten: ");
    gets(HoTen); 
    int i = 0;
    while (HoTen[i] != '\0') {
        if (HoTen[i] != ' ') {
            soKyTu++;
        }
        if ((i == 0 && HoTen[i] != ' ') || (HoTen[i] != ' ' && HoTen[i - 1] == ' ')) {
            soTu++;
        }
        i++;
    }

    printf("So ky tu: %d\n", soKyTu);
    printf("So tu: %d\n", soTu);
}