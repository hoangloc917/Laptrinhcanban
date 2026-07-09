#include <stdio.h>
int Length(char str[]){
    int i=0;
    while (str[i]!='\0'){
        i++;
    }
    return i;
}
int main ()
{
    char str[500];
int len;
fgets(str,500,stdin);
len = Length(str);
if (str[len-1]=='\n') 
{
    len--;
    str[len]='\0';
}
printf("%s\n%d",str, len);
    return 0;
}