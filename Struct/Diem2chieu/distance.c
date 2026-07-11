#include <stdio.h>
#include <math.h>
struct Point
{
    double X, Y;
};
double distance(struct Point a, struct Point b)
{
    double dis = sqrt(pow((a.X - b.X), 2) + pow((a.Y - b.Y), 2));
    return dis;
}
int main()
{
    struct Point A = {1, 2};
    struct Point B = {3, 4};
    printf("%.4f", distance(A, B));
    return 0;
}