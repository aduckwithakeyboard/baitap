#include <stdio.h>
void main()
{
    float a,b;
    printf("nhap a b :");
    scanf("%f %f",&a,&b);
    if(a>b) a=a-b;
    else a=a+b;
    printf("a:%f",a);
}