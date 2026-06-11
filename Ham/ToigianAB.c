#include <stdio.h>
void reduce(int a, int b){
	 int min=(a<b) ? a:b;
	 int ucln=0,as,bs;
	 for (int i=min;i>=1;i--){
	 	if (a%i==0 && b%i==0){
	 	     ucln=i;
	 		break;
		 }
	 }
	 if (a<b){
	 	 as=a/ucln;
	 	 bs=b/ucln;
	 } else {
	 	as=a;
	 	bs=b;
	 }
	 printf("%d/%d = %d/%d",a,b,as,bs);
	 return;
} 
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    reduce(a,b);
    return 0;
}