#include <stdio.h>

void main()
{
    int n,s1=0;
    float s2=0.0;
    int i,j;
    printf("nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
        s1+=i;
        s2+=1.0/s1;
        }
    printf("S1:%d,S2:%f",s1,s2);
}