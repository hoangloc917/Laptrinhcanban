#include <stdio.h>
#include <stdlib.h>
void Delete(int p, int a[], int *pn)
{
    for (int i = p + 1; i < *pn; i++)
    {
        a[i - 1] = a[i];
    }
    (*pn)--;
}
int main()
{
    int a[] = {1, 5, 20, 0, 56, 9};
    int n = sizeof(a) / sizeof(int);
    int p, i;
    p = 5;
    for (i = 0; i <= n - 1; i++)
        printf("%d ", a[i]);
    Delete(p, a, &n);
    printf("\n");
    for (i = 0; i <= n - 1; i++)
        printf("%d ", a[i]);
    return 0;
}