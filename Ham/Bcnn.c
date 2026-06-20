#include <stdio.h>
int LCM(int a,int b){
    int max=(a>b) ? a:b;
    for (int i=max;i!=0;i++){
        if (i%a==0 && i%b==0){
            return i;
        }
    }
    return 0;
}
int main () 
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d", LCM(a, b));
    return 0;
}