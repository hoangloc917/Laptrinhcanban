#include <stdio.h>
int  isPalindrome(int A[],int n){
    for (int i=0;i<=(n-i-1);i++){
        if (A[i]!=A[n-i-1]){
            return 0;
        } 
    }
    return 1;
}
int main ()
{
   int A[]={0};
int n = sizeof(A)/sizeof(int);
printf("%d",isPalindrome(A,n));
    return 0;
}