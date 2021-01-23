#include <unistd.h>
#include <stdio.h>
int ft_iterative_power(int nb, int power){
	int i;
	i = nb;
	if(power < 0){
		return 0;
	}
	if(power == 0){
		return 1;
	}
	while(power > 1){
		i*=nb;
		power--;
	}
	return i;
}
int main(){
	printf("%d", ft_iterative_power(9, 9));
	return 0;
}
