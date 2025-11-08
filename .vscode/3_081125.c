#include <stdio.h>

void main()
{
    int a,b,c,d,max,min;
    printf("nhap a:");
    scanf("%d",&a);
    min=max=a;
    printf("nhap b:");
    scanf("%d",&b);
    printf("nhap c:");
    scanf("%d",&c);
    printf("nhap d:");
    scanf("%d",&d);
    if(b>max) max=b;
    if(c>max) max=c;
    if(d>max) max=d;
    if(b<min) min=b;
    if(c<min) min=c;
    if(d<min) min=d;
    printf("max:%d\n",max);
    printf("min:%d\n",min);
}