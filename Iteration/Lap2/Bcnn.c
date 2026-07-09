#include <stdio.h>
#include <stdlib.h>
int main () 
{
	long long a,b;
	scanf ("%lld%lld",&a,&b);
	a=abs(a);
	b=abs(b);
	int max=(a>b) ? a:b;
	if (a==0 || b==0)
	{
		long long bcnn=(a==0) ? b:a;
		printf("%lld",bcnn);
		return 0;
	 }else
	 {
		for (long long i=max;max>0;i++){
			if (i%a==0 && i%b==0){
				printf("%lld",i);
				break;
			}
		}
	}
	return 0;
}