#include<unistd.h>
void ft_putchar(char s){
    write(1, &s, 1);
}
void ft_putstr(char *str){
    int i;
    i=0;
    while(str[i]!= '\0'){
        ft_putchar(str[i]);
        i++;
    }
}
int main(){
    ft_putstr("hello mafak");
    return 0;
}