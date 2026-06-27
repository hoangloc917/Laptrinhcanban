#include <stdio.h>
void demsole(int a[],int n){
    int count=0;
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]%2!=0){
            count++;
        }
    }  
    if (count!=0){
        printf("%d\n",count);
    for (int i=0;i<n;i++){
        if (a[i]%2!=0){
           printf("%d ",a[i]);
        }
    }
} else {
    printf("%d \nNONE",count);
}
}
int main ()
{
    int n, a[100];
    scanf("%d",&n);
     demsole(a,n);
    return 0;
}