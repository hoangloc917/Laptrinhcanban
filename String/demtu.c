#include <stdio.h>
#include <string.h>
void deletespace(char str[])
{
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }
}
int demchuoi(char str[])
{
    int count = 0;
    int in_word = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            if (in_word == 0)
            {
                count++;
                in_word = 1;
            }
        }
        else
        {
            in_word = 0;
        }
    }
    return count;
}
int main()
{
    char str[501];
    fgets(str, sizeof(str), stdin);
    deletespace(str);
    printf("%s\n",str);
    printf("%d",demchuoi(str));
    return 0;
}