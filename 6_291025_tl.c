#include <stdio.h>
void main()
{
    int i,n,c=0;
    printf("nhap gia tri nguyen duong:");
    scanf("%d",&i);
    while(i<0)
    {
        printf("nhap lai gia tri nguyen duong :");
        scanf("%d",&i);
    }
    n=i;
    printf("so dao nguoc:");
    while (n>0)
    {
        c=n%10;
        printf("%d",c);
        n/=10;
    }
    
}
