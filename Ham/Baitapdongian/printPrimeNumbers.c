#include <stdio.h>
#include <math.h>
int isprime(int n){
	if (n<=1) return 0;
			for (int j=2;j<=sqrt(n);j++){
			    if (n%j==0){
					return 0;
				} 
		} return 1;
}
void printPrimeNumbers(int a[],int n){
	int count=0;
	for  (int i=0;i<n;i++){
		if (isprime(a[i])){
			count++;
		}
	}
	printf("\n%d\n",count);
	for  (int i=0;i<n;i++){
		if (isprime(a[i])){
			printf("%d ",a[i]);
		}
	}
}
int main ()
{
	int n;
	scanf("%d",&n);
	int a[1000];
	for (int i=0; i<n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=0; i<n;i++){
		printf("%d ",a[i]);
	}
	isprime(n);
	printPrimeNumbers(a, n);
	return 0;
}