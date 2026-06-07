#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int f0 = 0,f1 = 1;
    printf("%d",f0);
    if (n>=1){
        printf(", %d",f1);
        int next=f0+f1;
        while (next <=n){
           printf(", %d", next); 
           f0=f1;
           f1=next;
           next=f0+f1;
        }
    }
    return 0;
}