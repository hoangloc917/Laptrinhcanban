#include <stdio.h>
int main ()
{
    int d,c,n;
    int count=0;
    int a[50][50];
    scanf("%d%d",&d,&c);
    for (int i=0;i<d;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    } scanf("%d",&n);
    for (int i=0;i<d;i++){
        for (int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<d;i++){
        for (int j=0;j<c;j++){
            if (a[i][j]==n){
                printf("(%d, %d) ",i,j);
                count++;
            }
        }
    }
    if (count!=0){
        printf("\n%d",count);
    } else{
        printf("%d",count);
    }
    return 0;
}