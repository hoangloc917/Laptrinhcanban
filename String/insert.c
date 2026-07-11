#include <stdio.h>
#include <string.h>
void Insert(char str[], char c, int p)
{
    int len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
    for (int i = len; i >= p; i--)
    {
        str[i + 1] = str[i];
    }
    str[p] = c;
}
int main()
{ 
    char str[500];
    fgets(str, 500, stdin);
    printf("%s", str);
    Insert(str, '-', 4);
    printf("%s", str);
    return 0;
}