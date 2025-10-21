#include <stdio.h>
#include <math.h>

void main()
{
    float Ax,Ay,Bx,By,Cx,Cy,AB,AC,BC;
    printf("nhap toa do diem A: ");scanf("%f %f", &Ax, &Ay);
    printf("nhap toa do diem B: ");scanf("%f %f", &Bx, &By);
    printf("nhap toa do diem C: ");scanf("%f %f", &Cx, &Cy);
    AB=sqrt((Ax-Bx)*(Ax-Bx)+(Ay-By)*(Ay-By));
    AC=sqrt((Ax-Cx)*(Ax-Cx)+(Ay-Cy)*(Ay-Cy));
    BC=sqrt((Bx-Cx)*(Bx-Cx)+(By-Cy)*(By-Cy));
    if (AB+AC>BC && AB+BC>AC && AC+BC>AB)
    {
        printf("độ dài 3 cạnh AB,AC,BC: %f %f %f \n",AB,AC,BC);
        printf("độ dài trung tuyến AM: %f",2*((AB*AB+AC*AC)-BC*BC)/4);
    }
    else
    {
        printf("toạ độ 3 điểm A B C không tạo thành tam giác");
    }

}