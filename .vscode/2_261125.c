#include <stdio.h>
void main()
{
    char A[100],B[100];
    int i=0;
    printf("nhap chuoi:");gets(A);
    while(A[i]!='\0')
    {
        B[i]=A[i];
        i++;
    }
    i=0;
    while (B[i]!=0)
    {
        printf("%c",B[i]);
        i++;
    }
    
}