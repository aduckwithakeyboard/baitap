#include <stdio.h>
void main()
{
    int i,n,c=0,sum=0;
    printf("nhap gia tri nguyen duong:");
    scanf("%d",&i);
    while(i<0)
    {
        printf("nhap lai gia tri nguyen duong :");
        scanf("%d",&i);
    }
    n=i;
    while (n>0)
    {
        c=n%10;
        n/=10;
        sum+=c;
    }
    printf("tong:%d",sum);
}
