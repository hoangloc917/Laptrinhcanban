#include <stdio.h>
#include <math.h>
struct Point
{
    double X, Y;
};
int equal(struct Point a, struct Point b, double ep)
{
    double dis = sqrt(pow((a.X - b.X), 2) + pow((a.Y - b.Y), 2));
    if (dis < ep)
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
    struct Point B = {1, 2.00000001};

    if (equal(A, B, 0.000001))
        printf("A = B");
    else
        printf("A != B");
    return 0;
}