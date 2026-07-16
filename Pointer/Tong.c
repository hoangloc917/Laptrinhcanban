#include <stdio.h>
void add(int a, int b, int *c)
{
    *c = a + b;
}
int main()
{
    int c;
    add(-5, 1, &c);
    printf("%d\n", c);
    return 0;
}