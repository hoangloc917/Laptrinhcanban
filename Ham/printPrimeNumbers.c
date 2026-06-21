#include <stdio.h>
void printPrimeNumbers(int a,int b){
	int count=0;
	for (int i=a; i<=b;i++){
		for (int j=2;j<i;j++){
			if (i%j==0){
				count=1;
				break;
			}
		}
		if (count==0){
			printf ("%d ",i);
		}
		count=0;
	}
	
}
int main ()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printPrimeNumbers(a, b);
	return 0;
}