#include <stdio.h>

void main()
{
    int i,n,S;
    printf("nhap n:");
    scanf("%d",&n);
    S=n;
    for (i=1;i<n;i++)
        S=S+i;
        printf("S:%d",S);
}