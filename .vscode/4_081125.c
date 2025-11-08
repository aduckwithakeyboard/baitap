#include <stdio.h>

void main()
{
    char a;
    printf("nhap 1 ky tu: ");
    scanf("%c",&a);
    if(a>='a' && a<='z') printf("day la ki tu thuong co ma ASCII la:%d",a);
    else if(a>='A' && a<='Z') printf("day la ki tu in hoa co ma ASCII la:%d",a);
    else if(a>='0'&& a<='9') printf("day la so co ma ASCII la:%d",a);
    else printf("day la dau co ma ASCII la: %d",a);
}