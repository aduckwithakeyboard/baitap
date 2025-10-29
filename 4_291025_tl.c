#include <stdio.h>
void main()
{
    int n1=0,i=0,n2=1,n=0,fn=0;
    printf("nhap n:");
    scanf("%d",&n);
    while(n<3)
    {
        printf("nhap lai n>=3:");
        scanf("%d",&n);
    }
    printf("day fibo:%d %d ",n1,n2);
    for(i=1;i<n-1;i++)
        {
        if(n<3) break;
        fn=n1+n2;
        printf("%d ",fn);
        n1=n2;
        n2=fn;
        }
}