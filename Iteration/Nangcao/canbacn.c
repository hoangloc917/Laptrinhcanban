#include <stdio.h>
#include <math.h>
int main ()
{
    double a,x0,xk,epsilon;
    int n;
    scanf("%lf%d%lf",&a,&n,&epsilon);
    x0=a/n;
    xk=fabs( ((n-1)*pow(x0,n)+a) / ( n*pow(x0,n-1) ) );
    while ( fabs(a-pow(xk,n)) >= epsilon ) {
        x0=xk;
        xk= fabs( ((n-1)*pow(x0,n)+a) / (n*pow(x0,n-1)) );
    }
    printf("%.8f\n", xk);
    return 0;
}