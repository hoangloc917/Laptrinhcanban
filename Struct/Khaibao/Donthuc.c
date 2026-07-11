#include <stdio.h>
#include <string.h>
typedef struct
{
    float he_so;
    int bac;
} DonThuc;
void InDonThuc(DonThuc d)
{
    printf("%.2fx^%d\n", d.he_so, d.bac);
}
int main()
{
    DonThuc d = {1.5, 5};
    InDonThuc(d);
    return 0;
}