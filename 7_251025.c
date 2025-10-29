#include <stdio.h>
#include<math.h>
void main()
{
    float x,y1,y2;
    printf("Nhập x:");
    scanf("%f",&x);
    y1=pow(x+pow(x,7*x),1.0/3.0);
    y2=pow(pow(x,sqrt(x*5))+cbrt(x),1.0/7.0);
    printf("y1=%f\n",y1);
    printf("y2=%f\n",y2);
}