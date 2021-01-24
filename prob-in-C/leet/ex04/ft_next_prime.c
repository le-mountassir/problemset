#include <unistd.h>
#include <stdio.h>
int ft_prime(int nb){
	int i;
	i = 2;
	while(i < (nb/2)){
		if(nb % i == 0){
			return 0;
		}
		i++;
	}
	return 1;
}
int ft_next_prime(int nb){
	while(nb++){
		if(ft_prime(nb)){
			return nb;
		}
	}
}
int main(){
	printf("%d", ft_next_prime(17));
	return 0;
}
