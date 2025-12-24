#include <stdio.h>
#include <string.h>

void main()
{
    char HoTen[30];
    int count,check;
    do
    {
        check = 1;   
        count = 0;
        printf("nhap ho ten:");
        gets(HoTen);
        while(HoTen[count]!='\0')
        {
            if (!((HoTen[count] >= 'A' && HoTen[count] <= 'Z') ||
                  (HoTen[count] >= 'a' && HoTen[count] <= 'z') ||
                   HoTen[count] == ' '))
            {
                printf("nhap sai nhap lai\n");
                check=0;
                break;
            }     
            count++;          
        }
    }while(check==0);
    printf("ho va ten:%s",HoTen);
}