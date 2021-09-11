#include <unistd.h>
void ft_putchar(char d){
    write(1, &d, 1);
}
void ft_ultima_d_m(int *a, int *b){
    int mod, div;
    div = *a / *b;
    mod = *a % *b;
    *a=div;
    *b=mod;
}