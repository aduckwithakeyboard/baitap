#include <stdio.h>
typedef struct 
{
    int MSSV;
    char HoTen[30];
    float LTC;
    float DTCB;
    float NMKT;
    float DTB;
} SinhVien;


void Nhap1SV(SinhVien *sv)
{
    printf("nhap MSSV:");
    scanf("%d",&sv->MSSV);
    getchar();
    printf("Nhap Ho va Ten:");
    gets(sv->HoTen);
    printf("Nhap diem Lap trinh C:");
    scanf("%f",&sv->LTC);
    printf("Nhap diem Dien tu co ban:");
    scanf("%f",&sv->DTCB);
    printf("Nhap diem Nhap mon ky thuat:");
    scanf("%f",&sv->NMKT);
    sv->DTB=(sv->LTC+sv->DTCB+sv->NMKT)/3;
}


void NhapDS(SinhVien ds[],int *N)
{
    printf("Nhap so sinh vien:");
    scanf("%d",N);
    for (int i = 0; i < *N; i++)
    {
        printf("-Sinh vien thu %d\n",i+1);
        Nhap1SV(&ds[i]);
    }
} 


void Xuat1SV(SinhVien sv)
{
    printf("%d\t%-10s\t%.1f\t%.1f\t%.1f\t%.2f\n",sv.MSSV, sv.HoTen, sv.LTC, sv.DTCB, sv.NMKT, sv.DTB);
}


void XuatDS(SinhVien ds[],int N)
{
    printf("\nMSSV\tHo va Ten\tLTC\tDTCB\tNMKT\tDTB\n");
    for (int i = 0; i < N; i++)
    {
        Xuat1SV(ds[i]);
    }
}


int TimSV(SinhVien ds[],int N,int MSSV)
{
    for (int i = 0; i < N; i++)
    {
        if(ds[i].MSSV == MSSV)
        {
            return i;
            break;
        }
    }
    return -1;
}


void TimSV_DTBmaxmin(SinhVien ds[],int N)
{
    float max=ds[0].DTB,min=ds[0].DTB;
    int maxpos=0,minpos=0;
    for (int i = 1; i < N; i++)
    {
        if(ds[i].DTB>max) {maxpos=i;max=ds[i].DTB;}
        if(ds[i].DTB<min) {minpos=i;min=ds[i].DTB;}
    }
    printf("-Sinh vien co DTB cao nhat:");
    printf("\nMSSV\tHo va Ten\tLTC\tDTCB\tNMKT\tDTB\n");
    Xuat1SV(ds[maxpos]);
    printf("\n");
    printf("-Sinh vien co DTB thap nhat:");
    printf("\nMSSV\tHo va Ten\tLTC\tDTCB\tNMKT\tDTB\n");
    Xuat1SV(ds[minpos]);
}

int main() {
    SinhVien ds[100];
    int n = 0;
    int choice;

    do {
        printf("\nCHUONG TRINH QUAN LY SINH VIEN\n");
        printf("1. Nhap danh sach\n");
        printf("2. Xuat danh sach\n");
        printf("3. Tim thong tin 1 sinh vien\n");
        printf("4. In ra thong tin sinh vien co DTB cao nhat va thap nhat\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                NhapDS(ds, &n);
                break;
            case 2:
                XuatDS(ds, n);
                break;
            case 3: {
                int MSSV;
                printf("Nhap MSSV can tim: ");
                scanf("%d", &MSSV);
                int pos = TimSV(ds, n, MSSV);
                if (pos != -1) {
                    printf("Thong tin sinh vien:");
                    printf("\nMSSV\tHo va Ten\tLTC\tDTCB\tNMKT\tDTB\n");
                    Xuat1SV(ds[pos]);
                } else {
                    printf("Khong tim thay sinh vien\n");
                }
                break;
            }
            case 4:
                TimSV_DTBmaxmin(ds,n);
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);

    return 0;
}