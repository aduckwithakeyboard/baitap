#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int A[100],B[100],count=0,bcount=0;
    int n=0,i=0,j=0;
    srand(time(0));
    printf("nhap n:");
    scanf("%d",&n);
    printf("day:");
    for(int i=0;i<n;i++)
    {
        A[i]=rand()%31;
        printf("%d ",A[i]);
    }
    for(i=0;i<n;i++)
    {   
        count=0;
        for(j=0;j<n;j++)
            if(A[i]==A[j])
                count++;
        if(count==1) B[bcount++]=A[i];
    }
    printf("\nso xuat hien 1 lan trong day: ");
    for(int i=0;i<bcount;i++)
        printf("%d ",B[i]);
}