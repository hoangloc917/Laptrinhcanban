#include <stdio.h>
int main()
{
    int i, n, A[100];
    scanf("%d", &n);
    int *p = A;
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}