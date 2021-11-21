#include <stdio.h>

void ft_prime(int x){
	if((x%2)==0){
		printf("\n%d is prime!\n",x);
	}
	else{
		printf("\n%d is not prime\n",x);
	}
	for(x; x>1; x--){
		if((x%2)!=0){
			printf("%d\n",x);
		}
	}
}
int main(){
	int y;
	printf("enter a number: ");
	scanf("%d",&y);
	ft_prime(y);
	return 0;
}
