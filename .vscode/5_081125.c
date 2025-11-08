#include <stdio.h>

void main()
{
    char a;
    printf("1.Chuyen nganh May tinh-He thong nhung\n2.Chuyen nganh Vien Thong-Mang\n3.Chuyen nganh Dien Tu");
    printf("\nBam [1,3] de chon chuyen nganh:");
    do
    {
        scanf("%c",&a);
        if(a=='1' || a=='2' || a=='3')
        {
            if(a=='1'){printf("ban da chon chuyen nganh May tinh-He thong nhung"); break;};
            if(a=='2'){printf("ban da chon chuyen nganh Vien Thong-Mang"); break;};
            if(a=='3'){printf("ban da chon chuyen nganh Dien Tu"); break;};
        }
        printf("nhap sai nhap lai:");
    } while (a!='1' && a!='2' && a!='3');
    
}