#include <unistd.h>
#include <stdio.h>
int recur_factorial(int nb){
	if(nb == 0){
		return 0;
	}
	if(nb == 1){
		return 1;
	}
	return (nb * (recur_factorial(nb-1)));

}
int main(){
	printf("%d", recur_factorial(5));
	return 0;
}
