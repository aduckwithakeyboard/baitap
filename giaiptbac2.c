#include <stdio.h>
#include <math.h>

void main() 
{  
    float a,b,c,delta; 
    printf("Giai phuong trinh bac 2 ax^2 + bx + c= 0 \n"); 
    printf("Nhap he so a b c: ");  
    scanf("%f %f %f", &a, &b, &c); 
    delta=b*b-4*a*c;
    if (delta<0 || a==0)
        printf("Phuong trinh vo nghiem");
    else
        printf("Phuong trinh co 2 nghiem: %f , %f",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
}