#include <stdio.h>
#include <string.h>
void deletespace(char str[])
{
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }
}
int ktrdoixung(char dulieu[], int len)
{
    int first = 0;
    int last = len - 1;
    while (first < last)
    {
        if (dulieu[first] != dulieu[last])
        {
            return 0;
        }
        first++;
        last--;
    }
    return 1;
}
int main()
{
    char dulieu[500];
    fgets(dulieu, 500, stdin);
    deletespace(dulieu);
    int len = strlen(dulieu);
    puts(dulieu);
    if (ktrdoixung(dulieu, len))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}