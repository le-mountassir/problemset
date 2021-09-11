#include <unistd.h>
void ft_putchar(char d){
    write(1, &d, 1);
}
void ft_dv_md(int a, int b, int *div, int *mod){
    *div= a/b;
    *mod= a%b;
}