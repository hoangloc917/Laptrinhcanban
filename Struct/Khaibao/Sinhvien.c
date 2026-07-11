#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Khai báo cấu trúc SinhVien hoàn chỉnh
typedef struct
{
    char *HoTen;   // Con trỏ ký tự lưu họ tên sinh viên
    float LT;      // Điểm thi lý thuyết
    float TH;      // Điểm thi thực hành
    char *DiemChu; // Con trỏ ký tự lưu điểm chữ
} SinhVien;

// Hàm phụ hỗ trợ tính toán và cấp phát điểm chữ tự động dựa trên điểm tổng
void tinhDiemChu(SinhVien *sv)
{
    float tongDiem = sv->LT + sv->TH;
    char *chu;

    // Phân loại điểm chữ theo bảng công thức của đề bài
    if (tongDiem >= 9.0)
        chu = "A";
    else if (tongDiem >= 8.0)
        chu = "B+";
    else if (tongDiem >= 7.0)
        chu = "B";
    else if (tongDiem >= 6.0)
        chu = "C+";
    else if (tongDiem >= 5.0)
        chu = "C";
    else if (tongDiem >= 4.5)
        chu = "D+";
    else if (tongDiem >= 4.0)
        chu = "D";
    else
        chu = "F";

    // Cấp phát bộ nhớ động cho DiemChu dựa theo độ dài chuỗi kết quả (cộng 1 ký tự '\0')
    sv->DiemChu = (char *)malloc((strlen(chu) + 1) * sizeof(char));
    if (sv->DiemChu != NULL)
    {
        strcpy(sv->DiemChu, chu); // Sao chép điểm chữ vào vùng nhớ đã cấp phát
    }
}

int main()
{
    // --- Đoạn chương trình thao tác gốc từ đề bài ---
    SinhVien sv;
    char h[50];

    printf("Nhap ho ten sinh vien: ");
    fgets(h, 50, stdin); // Đọc họ tên từ bàn phím

    // Xóa ký tự xuống dòng '\n' do fgets để lại nếu có
    if (h[strlen(h) - 1] == '\n')
    {
        h[strlen(h) - 1] = '\0';
    }

    // Cấp phát vùng nhớ Heap và sao chép chuỗi từ h sang sv.HoTen
    sv.HoTen = strdup(h);

    printf("Nhap diem Ly thuyet va Thuc hanh (cach nhau bang khoang trang): ");
    scanf("%f%f", &sv.LT, &sv.TH); // Nhập điểm LT và TH

    // Tự động tính toán và cấp phát bộ nhớ cho sv.DiemChu
    tinhDiemChu(&sv);

    // Xuất kết quả kiểm tra thông tin sinh viên ra màn hình
    printf("\n--- Ket qua hiển thị ---\n");
    printf("%s %.3f %.3f\n", sv.HoTen, sv.LT, sv.TH);
    printf("Diem chu cua sinh vien: %s\n", sv.DiemChu);

    // --- Giải phóng bộ nhớ động trên Heap khi dùng xong ---
    free(sv.HoTen);
    free(sv.DiemChu);

    return 0;
}