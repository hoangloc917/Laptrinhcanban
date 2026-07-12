#include <stdio.h>
#include <math.h>
#include <string.h>
struct Point
{
    double X, Y;
};
struct Rect
{
    struct Point low_left;
    struct Point Up_right;
};
int main()
{
    struct Rect a = {{5, 7}, {1, 10}};
    printf("(%.1f, %.1f)\n", a.low_left.X, a.Up_right.Y);
    return 0;
}
