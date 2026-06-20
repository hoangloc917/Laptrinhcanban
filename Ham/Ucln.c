#include <stdio.h>
#include <stdlib.h>
int GCD(int a,int b){
    if (a==0 || b==0) {
        int ucln=(a==0) ? b:a;
        return ucln;
    } else {
        a=abs(a);
        b=abs(b);
        int min= (a<b) ? a:b;
        for (int i=min;i>=1;i--){
            if (a%i==0 && b%i==0){
                return i;
            }
        }
    }

}
int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d", GCD(a,b));
    return 0;
}