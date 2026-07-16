#include <stdio.h>
void Insert(int x, int p, int a[], int *n)
{
    for (int i = (*n) - 1; i >= p; i--)
    {
        a[i + 1] = a[i];
    }
    a[p] = x;
    (*n)++;
}
int main()
{
    int a[5];
    a[0] = 1;
    a[1] = 5;
    a[2] = 2;
    a[3] = 0;
    int n = 4;
    int x, i, p;
    x = 100;
    p = 4;
    Insert(x, p, a, &n);
    for (i = 0; i <= n - 1; i++)
        printf("%d ", a[i]);
    return 0;
}