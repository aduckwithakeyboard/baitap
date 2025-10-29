#include <stdio.h>
void main()
{
    char Kytu;
    printf("nhap 1 ki tu chu thuong tren ban phim:");
    scanf("%c",&Kytu);
    int Kytuhoa=(int)Kytu;
    Kytuhoa=Kytuhoa-32;
    Kytuhoa=(char)Kytuhoa;
    printf("ki tu chu hoa :%c",Kytuhoa);
}