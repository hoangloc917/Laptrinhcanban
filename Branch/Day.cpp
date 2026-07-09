#include <stdio.h>
int main ()
{
 int d,m,y,m1=0,m2=31,m3=59,m4=90,m5=120,m6=151,m7=181,m8=212,m9=243,m10=273,m11=304,m12=334;
    scanf("%d %d %d", &d, &m, &y);
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
    	switch (m){
    case 1: d=d+m1; printf("%d", d); break;
    case 2: d=d+m2; printf("%d", d); break;
	case 3: d=d+m3+1; printf("%d", d); break;
	case 4: d=d+m4+1; printf("%d", d); break;
	case 5: d=d+m5+1; printf("%d", d); break;
	case 6: d=d+m6+1; printf("%d", d); break;
	case 7: d=d+m7+1; printf("%d", d); break;
	case 8: d=d+m8+1; printf("%d", d); break;
	case 9: d=d+m9+1; printf("%d", d); break;
	case 10: d=d+m10+1; printf("%d", d); break;
	case 11: d=d+m11+1; printf("%d", d); break;
	case 12: d=d+m12+1; printf("%d", d); break;}
}
 else{
  switch (m){
    case 1: d=d+m1; printf("%d", d); break;
    case 2: d=d+m2; printf("%d", d); break;
	case 3: d=d+m3; printf("%d", d); break;
	case 4: d=d+m4; printf("%d", d); break;
	case 5: d=d+m5; printf("%d", d); break;
	case 6: d=d+m6; printf("%d", d); break;
	case 7: d=d+m7; printf("%d", d); break;
	case 8: d=d+m8; printf("%d", d); break;
	case 9: d=d+m9; printf("%d", d); break;
	case 10: d=d+m10; printf("%d", d); break;
	case 11: d=d+m11; printf("%d", d); break;
	case 12: d=d+m12; printf("%d", d); break;}
    }
	return 0;
}