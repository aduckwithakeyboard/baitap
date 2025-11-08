#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,sum=0,count=0,min=0,max=0;
    char c[10];
    do
    {   
        printf("nhap mot so :");
        scanf("%s",c);
        if(c[0]=='q'||c[0]=='Q') break;
        i=atoi(c);
        sum+=i;
        count+=1;
        if(i>max) max=i;
        if(i<min) min=i;
    } while (1);
    printf("tong:%d",sum);
    printf("trung binh:%f",(float)sum/count);
}