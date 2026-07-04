#include <stdio.h>
void printArray(int a[],int n){
    if (n!=0){
        printArray(a, n-1);
        printf("%d\n",a[n-1]);
    }else{

    }
}
int main ()
{
    int n;
    int a[1000];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    printArray(a, n);
    return 0;
}