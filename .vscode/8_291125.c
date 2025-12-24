#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int A[100];
    int n=100,i=0,j=0;
    int f1=1,f2=2;
    srand(time(0));
    printf("day:");
    for(int i=0;i<n;i++)
    {
        A[i]=rand()%51;
        printf("%d ",A[i]);
        if(i%10==0) printf("\n");
    }
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (A[j]<A[i])
            {
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
    printf("\nday da xep: ");
    for(int i=0;i<n;i++)
    {
        if(i%10==0) printf("\n");
        printf("%d ",A[i]);
    }
}