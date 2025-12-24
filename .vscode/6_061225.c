#include <stdio.h>
#include <string.h>

void main()
{
    char HoTen[100];
    int i;

    printf("Nhap ho va ten: ");
    gets(HoTen); // khuyên dùng fgets để an toàn

    for (i = 0; HoTen[i] != '\0'; i++) {
        if (i == 0 || HoTen[i - 1] == ' ') 
        {
            if (HoTen[i] >= 'a' && HoTen[i] <= 'z') 
            {
                HoTen[i] -= 32;
            }
        } 
        else 
        {
            if (HoTen[i] >= 'A' && HoTen[i] <= 'Z') 
            {
                HoTen[i] += 32;
            }
        }
    }

    printf("Ho va ten : %s\n", HoTen);
}