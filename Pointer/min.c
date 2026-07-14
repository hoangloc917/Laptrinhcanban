#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, A[100];
    scanf("%d", &n);
    int *p = A;
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    int min = 1000;
    if (n == 0)
    {
        printf("Mang rong!");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            if (*(p + i) < min)
            {
                min = *(p + i);
            }
        }
        for (i = 0; i < n; i++)
        {
            printf("%d ", *(p + i));
        }
        printf("\nGia tri nho nhat: %d", min);
    }

    return 0;
}