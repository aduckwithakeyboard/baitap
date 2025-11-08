#include <stdio.h>

void main()
{
    int diem;
    printf("nhap diem:");
    scanf("%d",&diem);
    switch (diem)
    {
    case 1:
    case 2:
    case 3:
        printf("yeu");
        break;
    case 4:
        printf("kem");
        break;
    case 5:
    case 6:
        printf("trung binh");
        break;
    case 7:
        printf("kha");
        break;
    case 8:
        printf("gioi");
        break;
    case 9:
    case 10:
        printf("xuat xac");
        break;
    default:
        printf("nhap gia tri hop le");
        break;
    }
}