#include <stdio.h>
#include <math.h>

float dientichtamgiac(float x1, float y1, float x2, float y2, float x3, float y3)
{
    return 0.5 * fabs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)));
}
// nguon cong thuc:https://giasuthanhtam.com/cong-thuc-tinh-dien-tich-tam-giac-bang-toa-do.html

void main()
{
    float Ax,Ay,Bx,By,Cx,Cy,Mx,My,AB,AC,BC;
    printf("nhap toa do diem A: ");scanf("%f %f", &Ax, &Ay);
    printf("nhap toa do diem B: ");scanf("%f %f", &Bx, &By);
    printf("nhap toa do diem C: ");scanf("%f %f", &Cx, &Cy);
    printf("nhap toa do diem M: ");scanf("%f %f", &Mx, &My);
    AB=sqrt((Ax-Bx)*(Ax-Bx)+(Ay-By)*(Ay-By));
    AC=sqrt((Ax-Cx)*(Ax-Cx)+(Ay-Cy)*(Ay-Cy));
    BC=sqrt((Bx-Cx)*(Bx-Cx)+(By-Cy)*(By-Cy));
    if (AB+AC>BC && AB+BC>AC && AC+BC>AB)
    {
        float ABC = dientichtamgiac(Ax, Ay, Bx, By, Cx, Cy);
        float ABM = dientichtamgiac(Ax, Ay, Bx, By, Mx, My);
        float BCM = dientichtamgiac(Bx, By, Cx, Cy, Mx, My);
        float CAM = dientichtamgiac(Cx, Cy, Ax, Ay, Mx, My);
        if (ABM == 0 || BCM == 0 || CAM == 0)
            printf("diem M nam tren canh tam giac ABC");
        else if((ABM + BCM + CAM) == ABC)
            printf("diem M nam trong tam giac ABC");
        else 
            printf("diem M nam ngoai tam giac ABC");
    }
    else
    {
        printf("toa do 3 diem A B C khong tao thanh hinh tam giac");
    }

}

