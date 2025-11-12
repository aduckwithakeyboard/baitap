#include <stdio.h>
void main()
{
    int A[100],B[100];
    int N,i,tong=0,tich=1,c=0,Bc=0,min=9999;
    printf("nhap so phan tu trong day:");
    scanf("%d",&N);
    printf("nhap day:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
        if (A[i] % 2 == 0 && A[i] < min) {min= A[i];}    
    }
    if (min==0)
        printf("Khong co so chan trong day.\n");
    else
        printf("So chan nho nhat la: %d\n", min);
}