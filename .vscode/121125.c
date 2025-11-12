#include <stdio.h>
void main()
{
    int A[100];
    int n=-1,i,j;
    do
    {
        printf("nhap so phan tu (0,100]:");
        scanf("%d",&n);
    }while (n<0 || n>=100);
    printf("nhap day \n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    int min=A[0];
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
            if (A[j]<min)
            {
                int c=A[j];
                A[j]=A[i];
                A[i]=c;
            }
    printf("array:");
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
}