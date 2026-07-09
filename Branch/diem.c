#include <stdio.h>
int main() {
    float x, y, z, k,diem,l;
    scanf("%f %f %f %f %f", &x, &y, &z, &k, &l);
    diem = (x + y + z+ k + l);
    if (diem >=4)
        printf("DAT");
    else
        printf("KHONG DAT");
    return 0;
}