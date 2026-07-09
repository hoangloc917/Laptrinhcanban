#include <stdio.h>
#include <math.h>
int main ()
{
    double epsilon;
    scanf("%lf",&epsilon);
   int n=0;
   double pi=0.0;
   double t=4.0/(2*n+1);
   while (t>epsilon){
    if (n%2==0){
        pi=pi+t;
    } else{
        pi=pi-t;
    }
    n+=1;
    t=4.0/(2*n+1);
   }
    printf("pi = %.8lf",pi);
    return 0;
}