#include <stdio.h>
#include <string.h>

void main()
{
    char HoTen[30];
    int count=0,i=0;
    printf("\nnhap ho ten:");
    gets(HoTen);
    printf("doi sang chu hoa [1]\ndoi sang chu thuong[2]\n");
    scanf("%d",&i);
    if(i==1)
    {
        while(HoTen[count]!='\0')
        {
            if(HoTen[count]>='a' && HoTen[count]<='z')
                HoTen[count]-=32;
            count++;
        }
        printf("ho va ten in hoa:%s\n",HoTen);
    }    
    if(i==2)
    {
        while(HoTen[count]!='\0')
        {
            if(HoTen[count]>='A' && HoTen[count]<='Z')
                HoTen[count]+=32;
            count++;
        }
        printf("ho va ten in thuong:%s\n",HoTen);
    }
}