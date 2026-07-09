#include <stdio.h>
int sumArray(int A[],int n){
    if (n!=0){
        return A[n-1]+sumArray(A, n-1);
    }else{
        return 0;
    }
}
int main () 
{
    int n; 
    int A[1000];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("%d",sumArray(A, n));
    return 0;
}