#include <stdio.h>
void readArray(int A[],int n){
    if (n!=0){
        readArray(A, n-1);
        scanf("%d",&A[n-1]);
    } 
}
int main ()
{
    int n,A[1000];
    scanf("%d",&n);
    readArray(A,n);
    for (int i=0;i<n;++i){
        printf("%d ",A[i]);
    }
    return 0;
}