#include <unistd.h>
void ft_prt_num(void){
	char i;
	i = '0';
	while(i <= '9'){
		write(1, &i, 1);
		i++;
	}	
}
int main(){
	ft_prt_num();
	return 0;
}
