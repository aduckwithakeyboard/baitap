#include <stdio.h>
void main()
{
    int n;
    int A[100],B[100],Sum[100];
    printf("nhap n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int trung;
        do
        {
            trung=0;
            printf("A[%d]=",i);
            scanf("%d",&A[i]);
            for(int j=0;j<i;j++)
            {
                if(A[j]==A[i])
                {
                    trung=1;
                    printf("gia tri bi trung nhap lai \n");
                    break;
                }
            }
        } while (trung==1);
    }
    printf("day :");
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
}