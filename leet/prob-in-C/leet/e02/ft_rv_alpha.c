#include <unistd.h>
void ft_putchar(char x);
void ft_print_reverse_alphabet(void){
	char i;
	i="z";
	while(i>="a"){
		ft_putchar(i);
		i--;
	}
}
