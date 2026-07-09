#include <stdio.h>
#include <string.h>
void deletespace(char str[])
{
    int len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
}
int countVowels(char str[])
{
    int count=0;
    //deletespace(str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (strchr("aeouiAEOUI",str[i])!= NULL){
     count++;
        }
    }
    return count;
}
int main()
{
    char str[500];
    fgets(str, 500, stdin);
    printf("%s%d", str, countVowels(str));
    return 0;
}