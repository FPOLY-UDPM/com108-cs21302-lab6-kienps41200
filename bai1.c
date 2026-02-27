/******************************************************************************
 * Họ và tên: [Nguyễn Ngọc Trung Kiên]
 * MSSV:      [PS41200
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY

#include <stdio.h>

// Hàm tính trung bình cộng các số chia hết cho 3
float tinhTrungBinhChiaHetCho3(int a[], int n) {
    int tong = 0;
    int dem = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            tong += a[i]; // Cộng dồn giá trị
            dem++;        // Tăng biến đếm
        }
    }

    // Kiểm tra để tránh lỗi chia cho 0 nếu mảng không có số nào chia hết cho 3
    if (dem == 0) {
        return 0;
    }

    return (float)tong / dem; // Ép kiểu sang float để có kết quả thập phân chính xác
}

int main() {
    int n;

    // Nhập số lượng phần tử của mảng
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    int mang[n];

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    // Gọi hàm và hiển thị kết quả
    float ketQua = tinhTrungBinhChiaHetCho3(mang, n);

    if (ketQua == 0) {
        printf("\nKhong co so nao trong mang chia het cho 3.\n");
    } else {
        printf("\nTrung binh tong cac so chia het cho 3 la: %.2f\n", ketQua);
    }

    return 0;
}