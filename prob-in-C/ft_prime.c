#include <stdio.h>

void ft_prime(int x){
	while(x >0){
		if((x%2)!=0){
			printf("%d\n",x);
		}
		x--;
	}
}
int main(){
	int y;
	printf("enter a number: ");
	scanf("%d",&y);
	ft_prime(y);
	return 0;
}



