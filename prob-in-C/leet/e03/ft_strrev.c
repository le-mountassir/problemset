
#include <unistd.h>
#include <stdio.h>
char *strrev(char *str){
    int i;
    int k;
    char store;
    i=0;
    k=0;
    while(str[i]!='\0'){
        i++;
    }
    i-=1;
    while(k<i){
        store = str[i];
        str[i] = str[k];
        str[k] = store;
        i--;
        k++;
    }
    return (str);
}
int main(){
    printf("%s", strrev("hi"));
    return 0;
}