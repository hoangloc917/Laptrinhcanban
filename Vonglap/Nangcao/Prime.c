#include <stdio.h>
#include <math.h>
int main ()
{
    int dem=0;
    long long n;
    scanf("%lld",&n);
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            dem=1;
            break;
        }
    }
    if (dem==1){
        printf("%lld is not a prime number.",n);
    }else {
         printf("%lld is a prime number.",n);
    }
    return 0;
}