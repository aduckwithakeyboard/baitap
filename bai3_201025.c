#include <stdio.h>
#include <math.h>

float hamso(float x)
{
    return 15*x*x+x+7.2;
}
 void main()
{
    float a,b,x;
    printf("nhap gia tri a: ");
    scanf("%f",&a);
    printf("nhap gia tri b: ");
    scanf("%f",&b);
    if(a<b)
    {
        x=(a+b)/3;
        printf("y=%f",hamso(x));
    }
    else if (a==b)
    {    
        x=1.5172;
        printf("y=%f",hamso(x));
    }
    else
    {
        x=(a-b)/(a*a+b*b);
        printf("y=%f",hamso(x));
    }
}