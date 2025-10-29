#include <stdio.h>
#include <math.h>
void main()
{
    float x,y1,y2;
    printf("Nhập x:");
    scanf("%f",&x);
    printf("%f",x);
    y1=pow(pow(x,sqrt(x*5))+cbrt(x),1.0/7.0);
    printf("y1=%f",y1);
}