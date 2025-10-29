#include <stdio.h>

void main()
{
    int i,n,S;
    printf("nhap n:");
    scanf("%d",&n);
    S=n;
    if (n%2==0)
    {
        for (i=2;i<n;i+=2)
            S=S+i;
        printf("S:%d",S);
    }
    else
    {
        for (i=1;i<n;i+=2)
            S=S+i;
        printf("S:%d",S);
    }
    
}