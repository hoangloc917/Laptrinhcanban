#include <stdio.h>
#include <math.h>
int main ()
{
    double epsilon;
    scanf("%lf",&epsilon);
    double tong = 0.0;
    double mau_so = 1.0;
    double dau = 1.0;
    double so_hang = 1.0 / mau_so;
    while (so_hang>=epsilon){
        tong+=dau*so_hang;
        mau_so+=2;
        dau=-dau;
        so_hang=1.0/mau_so;
    }
    double pi=4*tong;
    printf("pi = %.8lf",pi);
    return 0;
}