#include <unistd.h>
#include <stdio.h>
int ft_int_factorial(int nb){
	int i;
	int j;
	j =1;
	i = 1;
	if(nb < 0){
		j = -1;
		nb*=j;
	}
	if(nb == 0){
		j=0;
	}
	while(nb > 0){
		i *= nb;
		nb--;
	}
	return i*j;
}
int main(){
	printf("%d", ft_int_factorial(14));
	return 0;
}
