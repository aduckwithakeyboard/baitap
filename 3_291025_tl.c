#include <stdio.h>
#include <math.h>
void main()
{
    int i=0,y=0;
    for(i=1;i<=10;i++)
    {
        for(y=1;y<=10;y++)
        {
            printf("%d * %d = %d \n",i,y,i*y);
        }
    }
}