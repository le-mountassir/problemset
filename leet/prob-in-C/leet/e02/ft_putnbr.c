#include <unistd.h>
void ft_putchar(char c){
    write(1, &c, 1);
}
void ft_putnbr(int numb){
    if(numb<0){
        ft_putchar('-');
        numb*=(-1);
    }
    if(numb>9){
        ft_putnbr(numb/10);
        ft_putnbr(numb%10);
    }
    else{
        ft_putchar('0'+numb);
    }
}
int main(){
    ft_putnbr(789);
    return 0;
}