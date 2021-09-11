#include <unistd.h>
#include <stdio.h>
int ft_strlen(char *ptr){
    int i;
    i=0;
    while(ptr[i]!='\0'){
        i++;
    }
    return i;
}
int main(){
    int j=ft_strlen("hi niigaa");
    printf("%d",j);
    return 0;
}