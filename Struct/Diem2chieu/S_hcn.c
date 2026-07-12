#include <stdio.h>
#include <math.h> // để dùng fabs cho float
struct point
{
    double x, y;
};
struct Rect
{
    struct point lower, upper;
};
double area(struct Rect r)
{
    double rong = (r.upper.x) - (r.lower.x);
    double dai = (r.upper.y) - (r.lower.y);
    rong = fabs(rong);
    dai = fabs(dai);
    return rong * dai;
}
int main()
{
    struct Rect r = {{10, 2}, {2, 8}};
    printf("%.5lf", area(r));
    return 0;
}