#include <stdio.h>
void main()
{
    int i;
    printf("nhap gia tri nguyen duong:");
    scanf("%d",&i);
    while(i<0)
    {
        printf("nhap lai gia tri nguyen duong :");
        scanf("%d",&i);
    }
}
