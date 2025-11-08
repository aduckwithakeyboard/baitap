#include <stdio.h>

void main()
{
    int a,b;
    int i,j,f;
    printf("nhap a b:");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        i=a;
        j=b;
    }
    else
    {
        i=b;
        j=a;
    }
    do
    {
        f=i%j;
        i=j;
        j=f;
    } while (i%j!=0);
    printf("uoc chung lon nhat:%d \n",f);
    printf("boi chung nho nhat:%d",(a*b)/f);
    
}