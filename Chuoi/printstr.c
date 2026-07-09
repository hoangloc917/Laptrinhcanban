#include <stdio.h>
#include <string.h>
void print(char dulieu[],int len){
    int k=0;
    char tu[500];
    for (int i=0;i<=len;i++){
        if (i<len && dulieu[i]!=' '){
            tu[k]=dulieu[i];
            k++;
        }else{
           if (k>0){
             tu[k]='\0';
            printf("%s\n",tu);
            k=0;
           }
        }
    }
}
int main ()
{
    char dulieu[500];
    fgets(dulieu,500,stdin);
      int len=strlen(dulieu);
      if (dulieu[len-1]=='\n'){
        dulieu[len-1]='\0';
        len--;
      }
      print(dulieu, len);
    return 0;
}