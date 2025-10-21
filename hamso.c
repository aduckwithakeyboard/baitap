#include <stdio.h>
#include <math.h>

float f(float x)
{
    x=pow(x,7)+5*cbrt(pow(x,5)+3*pow(x,3)+2)+12;
    return x;
}
void main()
{
    float a,b,c;
    printf("Nhap gia tri a b c: ");
    scanf("%f %f %f", &a, &b ,&c);
    printf("trung bình cộng f(c),f(b),f(c): %f",(f(a)+f(b)+f(c))/3);
}