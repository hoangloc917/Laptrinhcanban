#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void deletespace(char str[])
{
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }
}
void print(char dulieu[], int len)
{
    int in_word = 0;
    char *tu = (char *)malloc((len + 1) * sizeof(char));
    for (int i = 0; dulieu[i] != '\0'; i++)
    {
        if (dulieu[i] != ' ')
        {
            tu[in_word] = dulieu[i];
            in_word++;
        }
        else
        {
            if (in_word > 0)
            {
                tu[in_word] = '\0';
                printf("%s\n", tu);
                in_word = 0;
            }
        }
    }
    free(tu);
}
int main()
{
    char dulieu[500];
    fgets(dulieu, 500, stdin);
    deletespace(dulieu);
    int len = strlen(dulieu);
    print(dulieu, len);
    return 0;
}