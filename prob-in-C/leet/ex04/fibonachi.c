#include <unistd.h>

int fibonachi(int index){
	int i;
	if(index < 0){
		return -1;
	}
	if(index == 1){
		return 1;
	}
	if(index > 0){
		i = (fibonachi(index - 1) + fibonachi(index - 2));
	}
	else
		return 0;
}
int main(){
	fibonachi(33);
	return 0;
}
