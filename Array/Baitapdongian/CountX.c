#include <stdio.h>
int countX(int x,int A[],int n){
    int count=0;
    for (int i=0;i<n;i++){
        if (A[i]==x){
            count++;
        }
    }
     return count;
}
int main ()
{
    int A[]={1, 15, 100, 100, 6, 100};
int i,count,x;
int n = sizeof(A)/sizeof(int);
scanf("%d",&x);
for(i=0;i<=n-1;i++)
    printf("%d ",A[i]);
count=countX(x,A,n);
if (count == 0)
    printf("\nCan not found %d",x);
else printf("\nFound %d: %d times",x,count);
    return 0;
}