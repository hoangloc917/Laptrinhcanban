#include <stdio.h>
#include <string.h>
void length(char w[])
{
    int len = strlen(w);
    if (w[len - 1] == '\n')
    {
        w[len - 1] = '\0';
    }
}
int main()
{
    char w1[500];
    char w2[500];
    fgets(w1, 500, stdin);
    fgets(w2, 500, stdin);
    length(w1);
    length(w2);
    int kq = strcmp(w1, w2);
    if (kq > 0)
    {
        printf("1 > 2");
    }
    else if (kq == 0)
    {
        printf("1 = 2");
    }
    else
    {
        printf("1 < 2");
    }
    return 0;
}