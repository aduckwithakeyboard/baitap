#include <stdio.h>
void main()
{
    int i,n;
    printf("nhap so nguyen to:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {  
        if(n%i==0)
            {
            printf("khong phai so nguyen to");
            break;
            }
        if(i==n-1)
            {
            printf("so nguyen to %d \n",n);
            break;
            }
    }
}