#include <stdio.h>
void tangdan(int a[],int n){
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min_pos,tam;
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    } 
    for (int i=0;i<n-1;i++){
       min_pos=i;
       for (int j=i+1;j<n;j++){
           if (a[j]<a[min_pos]){
              min_pos=j;
           }
       }
       if (min_pos!=i){
          tam=a[i];
          a[i]=a[min_pos];
          a[min_pos]=tam;
       }
       }
     printf("\n");
     for (int i=0;i<n;i++){
        printf("%d ",a[i]);
     }
}
int main ()
{
    int n,a[1000];
    scanf("%d",&n);
    tangdan(a,n);
    return 0;
}