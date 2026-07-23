#include <stdio.h>
#include <string.h>
#include <ctype.h>
void deletespace(char str[])
{
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }
}
void Inhoachudau(char str[])
{
    int in_word = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && in_word == 0)
        {
            str[i] = toupper(str[i]);
            in_word++;
        }
        else
        {
            str[i] = tolower(str[i]);
            if (str[i + 1] == ' ')
            {
                in_word = 0;
            }
        }
    }
}
int main()
{
    char str[20];
    fgets(str, sizeof(str), stdin);
    deletespace(str);
    printf("%s\n", str);
    Inhoachudau(str);
    printf("%s", str);
    return 0;
}