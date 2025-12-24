#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int A[100],chan[100],chan_count=0,le[100],le_count=0,n=0;
    srand(time(0));
    printf("nhap n:");
    scanf("%d",&n);
    printf("day:");
    for(int i=0;i<n;i++)
    {
        A[i]=rand()%21;
        printf("%d ",A[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]%2==0)
        {
            chan[chan_count]=A[i];
            chan_count++;
        }
        if(A[i]%2!=0)
        {
            le[le_count]=A[i];
            le_count++;
        }
    }
    printf("\nday chan: ");
    for(int i=0;i<chan_count;i++)
        printf("%d ",chan[i]);
    printf("\nday le: ");
    for(int i=0;i<le_count;i++)
        printf("%d ",le[i]);
}