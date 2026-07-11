#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *subString(char st[], int pos, int number)
{
    char *res = (char *)malloc((number + 1) * sizeof(char));
    for (int i = 0; i < number; i++)
    {
        res[i] = st[pos + i];
    }
    res[number] = '\0';
    return res;
}
int main()
{
    char st[] = "Dai Hoc Can Tho";
    char *res = subString(st, 0, 7);
    puts(st);
    puts(res);
    free(res);
    return 0;
}