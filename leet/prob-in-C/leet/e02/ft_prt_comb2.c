#include<unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}
void ft_comb2(void){
    int i,k;
    i=-1;
    while (i++ < 98){
        k=i+1;
        while(k < 100){
            ft_putchar('0'+i / 10);
            ft_putchar('0'+ i % 10);
            ft_putchar(' ');
            ft_putchar('0'+ k / 10);
            ft_putchar('0'+ k % 10);
            if(k  != 99 || i != 98){
                ft_putchar(' ');
                ft_putchar(',');
            }
            k++;
        }
    } 
}
int main(){
    ft_comb2();
    return 0;
}