/******************************************************************************
 * Họ và tên: [Nguyễn Ngọc Trung Kiên]
 * MSSV:      [PS41200
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY
#include <stdio.h>

void timMaxMin(int a[], int n) {
    // Bước 1: Khởi tạo Max và Min bằng phần tử đầu tiên
    int max = a[0];
    int min = a[0];

    // Bước 2: Duyệt mảng từ phần tử thứ 2 (chỉ số 1)
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i]; // Cập nhật Max mới
        }
        if (a[i] < min) {
            min = a[i]; // Cập nhật Min mới
        }
    }

    // Bước 3: Xuất kết quả
    printf("\nGia tri lon nhat (Max) la: %d", max);
    printf("\nGia tri nho nhat (Min) la: %d\n", min);
}

int main() {
    int n;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    // Kiểm tra n hợp lệ
    if (n <= 0) {
        printf("So luong phan tu phai lon hon 0!\n");
        return 1;
    }

    int mang[n];

    // Nhập mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    // Gọi hàm tìm Max, Min
    timMaxMin(mang, n);

    return 0;
}
