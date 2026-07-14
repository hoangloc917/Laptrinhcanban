#include <stdio.h>
typedef struct
{ 
    int X, Y, Z; 
}Point3D;
int main ()
{
    Point3D *p;
    Point3D M;
    p=&M;
    scanf("%d%d%d",&(p->X),&(p->Y),&(p->Z));//  &(p->X) = &((*p).X)
    printf("Diem M co toa do X = %d, Y = %d va Z = %d\n",p->X,p->Y,p->Z);//  p->X = (*p).X
    return 0;
}