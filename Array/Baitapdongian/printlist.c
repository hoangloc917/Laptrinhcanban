#include <stdio.h>
void printList(int a[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main ()
{
    int n;
int a[]={1,4,5,7,10,-1,2}; 
n=sizeof(a)/sizeof(int);	//So phan tu
printList(a,n);
    return 0;
}