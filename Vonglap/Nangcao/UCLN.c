#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int goca=a,gocb=b;
    a=abs(a);
    b=abs(b);
    int min= (a<b) ? a:b;
    if (a==0 || b==0){
        int ucln= (a==0) ? b:a;
          printf("GCD(%d, %d) = %d",goca,gocb,ucln);
    }else{
    for (int i=min;i>=1;i--){
        if( a%i==0 && b%i==0){
            printf("GCD(%d, %d) = %d",goca,gocb,i);
            break;
        }
    } 
}
    return 0;
}