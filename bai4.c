/******************************************************************************
 * Họ và tên: [Nguyễn Ngọc Trung Kiên]
 * MSSV:      [PS41200
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

// Hàm nhập ma trận
void nhapMaTran(int a[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

// Hàm tính bình phương và xuất ma trận
void tinhBinhPhuong(int a[100][100], int n, int m) {
    printf("\nMa tran ket qua (binh phuong):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Tính bình phương: x^2 = x * x
            int binhPhuong = a[i][j] * a[i][j];
            printf("%d\t", binhPhuong); // \t để tạo khoảng cách giữa các cột
        }
        printf("\n"); // Xuống dòng sau khi in xong một hàng
    }
}

int main() {
    int n, m;
    int maTran[100][100];

    printf("Nhap so hang (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);

    // Bước 1: Nhập dữ liệu cho ma trận
    nhapMaTran(maTran, n, m);

    // Bước 2: Xử lý và in kết quả
    tinhBinhPhuong(maTran, n, m);

    return 0;
}