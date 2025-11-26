#include <stdio.h>

void main()
{
    float S=0.0;
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    {
        int mau=0,tu=1;
        for (int j = 1; j < i; j++)
        {
            tu*=j;
            mau+=j;
        }
        S+=(float)tu/mau;
    }
    printf("%f",S);
    
}