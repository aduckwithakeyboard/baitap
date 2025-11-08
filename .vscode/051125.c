#include <stdio.h>
int main(int argc, char const *argv[])
{l
    int x[12],max=0,min=0,maxpos=0,minpos=0;
    for(int i=0;i<12;i++)
    {
        printf("nhap x[%d] : ",i);
        scanf("%d",&x[i]);
    } 
    max=x[0]=min;
    printf("%d",x[0]);
    for(int i=0;i<12;i++)
    {
        if(max<x[i]){maxpos=i;max=x[i]+1;}
        if(min>x[i]){minpos=i;min=x[i]+1;}
    }
    printf("max: %d",max);
    return 0;
}
