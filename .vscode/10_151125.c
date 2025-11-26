#include <stdio.h>
void main()
{
    int n,m,space,stars,i,j,k;
    printf("\nNhap so cay thong: ");
    scanf("%d",&n);
    printf("\nNhap so tang: ");
    scanf("%d",&m);
for (i = 1; i <= m; i++) 
    {
        for (k = 1; k <= n; k++) 
        {
            space = m - i; 
            stars = 2 * i - 1;
            for (j = 1; j <= space; j++) {
                printf(" ");
            }
            for (j = 1; j <= stars; j++) {
                printf("*");
            }
            for (j = 1; j <= space; j++) {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    for (k = 1; k <= n; k++) 
    {
        int space = m - 1; 
        for (j = 1; j <= space; j++) {
            printf(" ");
        }
        printf("*"); 
        for (j = 1; j <= space; j++) {
            printf(" ");
        }
    }
    
    printf("\n");
    }