#include <stdio.h>
void main()
{
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int *p=A;
    for(int i=0;i<10;i++)
        printf("%d ",*(p+i));
}