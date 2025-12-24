#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int A[100];
    int n=0,x=0,pos=0;
    srand(time(0));
    printf("nhap n:");
    scanf("%d",&n);
    printf("day:");
    for(int i=0;i<n;i++)
    {
        A[i]=rand()%21;
        printf("%d ",A[i]);
    }
    printf("\nnhap toa do A[pos],  pos:");
    scanf("%d",&pos);
    for(int i=pos;i<n;i++)
    {
        A[i]=A[i+1];
    }
    A[n-1]=0;
    printf("day:");
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
}