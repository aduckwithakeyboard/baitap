#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int A[100],xpos[100],xcount=0;
    int n=0,x=0;
    srand(time(0));
    printf("nhap n:");
    scanf("%d",&n);
    printf("day:");
    for(int i=0;i<n;i++)
    {
        A[i]=rand()%21;
        printf("%d ",A[i]);
    }
    printf("\nnhap gia tri:");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(A[i]==x)
        {
            xpos[xcount]=i;
            xcount++;
        }
    }
    if(xcount==0) printf("khong co");
    else 
    {   
        printf("co gia tri x=%d o cac vi tri:",x);
        for(int i=0;i<xcount;i++)
            printf("A[%d] ",xpos[i]);
    }
}