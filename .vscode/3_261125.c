#include <stdio.h>
void main() 
{
    char A[100],B[100],C[200];
    int i=0,j=0;
    printf("nhap chuoi A:");gets(A);
    printf("nhap chuoi B:");gets(B);
    while(A[j]!='\0')
    {
        C[i]=A[j];
        i++;
        j++;
    }
    j=0;
    while(B[j]!='\0')
    {
        C[i]=B[j];
        i++;
        j++;
    }
    i=0;
    while(C[i]!='\0')
    {
        printf("%C",C[i]);
        i++;
    }
}