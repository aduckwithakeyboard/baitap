#include <stdio.h>
#include <math.h>

void main()
{
    float a,b,c,p,S;
    printf("Nhap gia tri 3 canh tam giac: ");
    scanf("%f %f %f", &a, &b ,&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        p=(a+b+c)/2;
        S=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("diện tích tam giác : %f \n",S);
        printf("đường cao tới cạnh a:%f \n",2*S/a);
        printf("đường cao tới cạnh b:%f \n",2*S/b);
        printf("đường cao tới cạnh c:%f \n",2*S/c); 
    }
    else
    {
        printf("chiều dài không thoả điều kiện xác định");
    }

}