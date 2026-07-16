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
int isIn(struct Point M, struct Rect r)
{
    double min_X = (r.low_left.X < r.Up_right.X) ? r.low_left.X : r.Up_right.X;
    double max_X = (r.low_left.X < r.Up_right.X) ? r.Up_right.X : r.low_left.X;
    double min_Y = (r.low_left.Y < r.Up_right.Y) ? r.low_left.Y : r.Up_right.Y;
    double max_Y = (r.low_left.Y < r.Up_right.Y) ? r.Up_right.Y : r.low_left.Y;
    if ((min_X <= M.X && M.X <= max_X) && (min_Y <= M.Y && M.Y <= max_Y))
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
    struct Rect r = {{10, 2}, {2, 8}};

    struct Point M = {10.01, 6};

    if (isIn(M, r))
        printf("YES");
    else
        printf("NO");
    return 0;
}
