#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int A[100],so_nguyen_to[100],count=0,j=0;
    int n=0,x=0;
    srand(time(0));
    printf("nhap n:");
    scanf("%d",&n);
    printf("day:");
    for(int i=0;i<n;i++)
    {
        A[i]=rand()%100;
        printf("%d ",A[i]);
    }
    for(int i=0;i<n;i++)
    {   
        if(A[i]<2) continue;
        else
        {
            for(j=2;j<A[i];j++)
                if (A[i]%j==0) break;
            if(A[i]==j)
            {
                so_nguyen_to[count]=A[i];
                count++;    
            }
        }
    }
    if(count==0) printf("khong co");
    else 
    {    
        printf("\nso nguyen to:");
        for(int i=0;i<count;i++)
            printf("%d ",so_nguyen_to[i]);
    }
}