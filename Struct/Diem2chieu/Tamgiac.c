#include <stdio.h>
#include <math.h>
struct Point
{
    double X, Y;
};
int isTriangle(struct Point a, struct Point b, struct Point c)
{
    double ab = sqrt(pow((a.X - b.X), 2) + pow((a.Y - b.Y), 2));
    double ac = sqrt(pow((a.X - c.X), 2) + pow((a.Y - c.Y), 2));
    double bc = sqrt(pow((b.X - c.X), 2) + pow((b.Y - c.Y), 2));
    if ((ab + ac > bc) && (ab + bc > ac) && (bc + ac > ab))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    struct Point A = {1, 2};
    struct Point B = {1, 3};
    struct Point C = {2, 3};

    if (isTriangle(A, B, C))
        printf("YES");
    else
        printf("NO");
}
