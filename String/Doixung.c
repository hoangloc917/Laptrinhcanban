#include <stdio.h>
#include <string.h>
int ktrdoixung(char dulieu[],int len){
    int first=0; 
    int last=len-1;
    while (first<last){
        if ( dulieu[first] != dulieu[last] ){
            return 0;
        }
        first++;
        last--;
    } 
    return 1;
}
int main ()
{
    char dulieu[500];
    fgets(dulieu,500,stdin);
    int len = strlen(dulieu);
    if (dulieu[len-1] == '\n'){ 
        len--;
        dulieu[len] = '\0';
    }
    puts(dulieu);
      if (ktrdoixung(dulieu, len)){
        printf("YES");
      }else{
        printf("NO");
      }
    return 0;
}