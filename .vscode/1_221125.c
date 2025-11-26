#include <stdio.h>
void main()
{
    int n;
    int A[100],B[100],Sum[100];
    printf("nhap n:");
    scanf("%d",&n);
    printf("nhap day A:");
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("nhap day B:");
    for(int i=0;i<n;i++)
        scanf("%d",&B[i]);
    printf("Day SUM:");
    for(int i=0;i<n;i++)
        {
        Sum[i]=A[i]+B[i];
        printf("%d ",Sum[i]);
        }
}