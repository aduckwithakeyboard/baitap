#include <stdio.h>
void main()
{
    int a,b,i,j;
    scanf("%d %d",&a,&b);
    int array[a][b];
    for(i=0;i<a;i++)
        for(j=0;j<b;j++)
            scanf("%d",&array[i][j]);
            
}