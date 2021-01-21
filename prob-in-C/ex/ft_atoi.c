#include <unistd.h>
#include <stdio.h>
int ft_atoi(const char *str){
	int i;
	int k;
	int j;
	k = 1;
	i=0;
	j=0;
	while(str[i]=='\n' || str[i] == '\r' || str[i]=='\f' || str[i] == '\v' || str[i] == '\t' || str[i] == ' '){
		i++;
	}	
	if(str[i] == '+' || str[i] == '-'){
		if(str[0] == '-'){
			k = -1;	
		}
		i++;
	}
	while(str[i] != '\0'){

		if(str[i] >= 48 && str[i] <= 57){
			j = (j*10) + (str[i] - '0');		
		}
		else{
			break;
		}
		i++;
	}
	return (j*k);
}
int main(){
	printf("%d", ft_atoi("\n  +98ko29"));
	return 0;
}
