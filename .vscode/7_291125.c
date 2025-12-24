#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int A[100],B[100],count=0,bcount=0;
    int n=0,i=0,j=0;
    int f1=1,f2=2;
    srand(time(0));
    printf("nhap n:");
    scanf("%d",&n);
    printf("day:");
    for(int i=0;i<n;i++)
    {
        A[i]=rand()%31;
        printf("%d ",A[i]);
    }
    while(f2<30)
    {   
        int c;
        for(int i=0;i<n;i++)
            if (f2==A[i])
            {
                B[bcount++]=A[i];
            }
        c=f1+f2;
        f1=f2;
        f2=c;

    }
    printf("\nso trung voi day fibo: ");
    for(int i=0;i<bcount;i++)
        printf("%d ",B[i]);
}