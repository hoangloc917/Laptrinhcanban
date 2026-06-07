#include <stdio.h>
int main ()  
{
    int n,count=0;
    scanf("%d",&n);
    if (n<10){
        printf("Number of digits: 1");
    }else{
    while (n!=0){
        n=n/10;
        count+=1;
    }}
    printf ("Number of digits: %d",count);
    return 0;
}