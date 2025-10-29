#include <stdio.h>
void main()
{
    int a=1,n=0,sum=0;
    printf("nhap n:");
    scanf("%d",&n);
    do
    {
        sum+=a;
        a+=1;
    }while(sum<n);
    printf("%d",a);
    
}