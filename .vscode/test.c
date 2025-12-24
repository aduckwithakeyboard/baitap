#include <stdio.h>
#include <string.h>

// Định nghĩa cấu trúc SinhVien
typedef struct {
    int MSSV;
    char HoTen[50];
    float LTC, DTCB, NMKT;
    float DTB;
} SinhVien;

// Nhập thông tin 1 sinh viên
void Nhap1SV(SinhVien *sv) {
    printf("Nhap MSSV: ");
    scanf("%d", &sv->MSSV);
    getchar(); // bỏ ký tự '\n' còn lại

    printf("Nhap Ho Ten: ");
    fgets(sv->HoTen, sizeof(sv->HoTen), stdin);
    sv->HoTen[strcspn(sv->HoTen, "\n")] = '\0'; // xóa '\n'

    printf("Nhap diem Lap trinh C: ");
    scanf("%f", &sv->LTC);

    printf("Nhap diem Dien tu co ban: ");
    scanf("%f", &sv->DTCB);

    printf("Nhap diem Nhap mon ky thuat: ");
    scanf("%f", &sv->NMKT);

    sv->DTB = (sv->LTC + sv->DTCB + sv->NMKT) / 3;
}

// Nhập danh sách sinh viên
void NhapDS(SinhVien sv[], int *N) {
    printf("Nhap so sinh vien: ");
    scanf("%d", N);
    for (int i = 0; i < *N; i++) {
        printf("\n--- Sinh vien thu %d ---\n", i+1);
        Nhap1SV(&sv[i]);
    }
}

// Xuất thông tin 1 sinh viên
void Xuat1SV(SinhVien sv) {
    printf("%d\t%-15s\t%.1f\t%.1f\t%.1f\t%.2f\n",
           sv.MSSV, sv.HoTen, sv.LTC, sv.DTCB, sv.NMKT, sv.DTB);
}

// Xuất danh sách sinh viên
void XuatDS(SinhVien sv[], int N) {
    printf("\nMSSV\tHo Ten\t\tLT C\tDTCB\tNMKT\tDTB\n");
    for (int i = 0; i < N; i++) {
        Xuat1SV(sv[i]);
    }
}

// Tìm sinh viên theo MSSV
int TimSV(SinhVien sv[], int N, int mssv) {
    for (int i = 0; i < N; i++) {
        if (sv[i].MSSV == mssv) return i;
    }
    return -1; // không tìm thấy
}

// Tìm sinh viên có DTB cao nhất và thấp nhất
void TimSV_DTBmaxmin(SinhVien sv[], int N) {
    if (N == 0) {
        printf("Danh sach rong!\n");
        return;
    }
    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < N; i++) {
        if (sv[i].DTB > sv[maxIndex].DTB) maxIndex = i;
        if (sv[i].DTB < sv[minIndex].DTB) minIndex = i;
    }
    printf("\nSinh vien co DTB cao nhat:\n");
    Xuat1SV(sv[maxIndex]);
    printf("\nSinh vien co DTB thap nhat:\n");
    Xuat1SV(sv[minIndex]);
}

// Hàm main với menu
int main() {
    SinhVien ds[100];
    int n = 0;
    int choice;

    do {
        printf("\n===== CHUONG TRINH QUAN LY SINH VIEN =====\n");
        printf("1. Nhap danh sach\n");
        printf("2. Xuat danh sach\n");
        printf("3. Tim thong tin sinh vien theo MSSV\n");
        printf("4. Sinh vien co DTB cao nhat va thap nhat\n");
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
                int mssv;
                printf("Nhap MSSV can tim: ");
                scanf("%d", &mssv);
                int pos = TimSV(ds, n, mssv);
                if (pos != -1) {
                    printf("Thong tin sinh vien:\n");
                    Xuat1SV(ds[pos]);
                } else {
                    printf("Khong tim thay sinh vien!\n");
                }
                break;
            }
            case 4:
                TimSV_DTBmaxmin(ds, n);
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
