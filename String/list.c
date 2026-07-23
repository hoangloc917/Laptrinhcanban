#include <stdio.h>
#include <string.h>
void deletespace(char str[])
{
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }
}
int main()
{
    int n;
    char list[40][50];
    scanf("%d", &n);
    getchar(); // lấy dấu cách từ hàm scanf
    for (int i = 0; i < n; i++)
    {
        fgets(list[i], sizeof(list[i]), stdin);
        deletespace(list[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d. %s\n", i + 1, list[i]);
    }

    return 0;
}