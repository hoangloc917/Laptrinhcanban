#include <stdio.h>
int main ()
{
    int n,a[1000];
    scanf("%d",&n);
       for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
       }
       for (int i=0;i<=n-i-1;i++){
           int tam=a[i];
           a[i]=a[n-i-1];
           a[n-i-1]=tam;
       }
       for (int i=0;i<n;i++){
        printf("%d ",a[i]);
       }
    return 0;
}