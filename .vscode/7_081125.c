#include <stdio.h>

void main()
{
    int i,sum=0,count=0,min=100,max=0;
    char c;
    do
    {   
    printf("Nhap mot so : ");
    scanf(" %c", &c);

    if(c=='q' || c=='Q') break;

    if(c >= '0' && c <= '9') {
        i = c - '0';
        sum += i;
        count++;
        if(i > max) max = i;
        if(i < min) min = i;
    } else {
        printf("Khong phai so\n");
    }
    } while (1);
    printf("tong:%d\n",sum);
    printf("trung binh:%f\n",(float)sum/count);
    printf("min:%d",min);
    printf("max:%d",max);
}