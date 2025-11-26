#include <stdio.h>
void main()
{
    int n,space,stars;
    printf("\nNhap gai tri n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        space=n-i;
        stars=2*(i+1)-1;
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    space=n;
    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }
    printf("*\n");
    
}