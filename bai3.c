/******************************************************************************
 * Họ và tên: [Nguyễn Ngọc Trung Kiên]
 * MSSV:      [PS41200
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

// Hàm hoán vị 2 số (tận dụng kiến thức Bài 3 trước đó)
void hoanVi(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Hàm sắp xếp mảng giảm dần
void sapXepGiamDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Nếu phần tử đứng sau lớn hơn phần tử đứng trước -> Hoán vị
            if (a[j] > a[i]) {
                hoanVi(&a[i], &a[j]);
            }
        }
    }
}

// Hàm xuất mảng
void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    int mang[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    printf("\nMang truoc khi sap xep: ");
    xuatMang(mang, n);

    sapXepGiamDan(mang, n);

    printf("Mang sau khi sap xep giam dan: ");
    xuatMang(mang, n);

    return 0;
}