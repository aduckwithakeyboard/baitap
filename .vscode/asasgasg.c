#include <stdio.h>

void main()
{
    char c;
    printf("1.May Tinh he thong nhung\n2.Vien thong mang\n3.Dien tu\n");
    printf("bam [1-3] de chon:");
    do
    {
        scanf("%c",&c);
        if (c=='1' && c=='2' && c=='3')
        {
            if (c=='1') printf("ban da chon may tinh he thong nhung");
            if (c=='2') printf("ban da chon vien thong mang");
            if (c=='3') printf("ban da chon dien tu");
        }
        printf("nhap lai");
    } while (c!='1' && c!='2' && c!='3');
    
}