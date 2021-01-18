#include <unistd.h>
void ft_putchar(char c);
void ft_alphabet(void){
	char f;
	f="a";
	while(f<="z"){
		ft_putchar(f);
		f++;
	}
}
