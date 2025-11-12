#include <stdio.h>
void main()
{
    int A[100],B[100];
    int N,i,tong=0,tich=1,c=0,Bc=0;
    printf("nhap so phan tu trong day:");
    scanf("%d",&N);
    printf("nhap day:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
        tong+=A[i];
        tich*=A[i];
        if(A[i]<=1000 && A[i]>=100) c+=1;
    }    
    for(i=0;i<N;i++)
    {
        if(A[i]%3==0 && A[i]>10)
        {
            B[Bc]=A[i];
            Bc+=1;
        }
    }
    printf("tich=%d\n",tich);
    printf("tong=%d\n",tong);
    printf("co %d so trong khoang [100,1000]\n",c);
    printf("cac so chia het cho 3 lon hon 10=");
    for(i=0;i<Bc;i++)
        printf("%d ",B[i]);
    
}