#include <stdio.h>
#include <string.h>
#include <ctype.h>// su dung tolower
int Compare(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if (c1 != c2)
        {
            return c1 - c2;
        }
        i++;
    }
    return tolower(s1[i]) - tolower(s2[i]);
}
int main()
{
    char s1[500], s2[500];
    int len;
    fgets(s1, 500, stdin);
    // Remove '\n' in fgets
    len = strlen(s1);
    if (s1[len - 1] == '\n')
    {
        len--;
        s1[len] = '\0';
    }

    fgets(s2, 500, stdin);
    // Remove '\n' in fgets
    len = strlen(s2);
    if (s2[len - 1] == '\n')
    {
        len--;
        s2[len] = '\0';
    }
    if (Compare(s1, s2) < 0)
        printf("1 < 2");
    else if (Compare(s1, s2) > 0)
        printf("1 > 2");
    else
        printf("1 = 2");
    return 0;
}