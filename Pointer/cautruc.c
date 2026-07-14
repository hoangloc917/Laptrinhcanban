#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int X, Y;
} Point;
int main()
{
    Point *p;
    p= (Point*) malloc(2*sizeof(Point));
    p->X=10;
    p->Y=20;
    printf("%d %d", (*p).X, (*p).Y);
    free(p);
    return 0;
}
