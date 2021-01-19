#include <stdio.h>
int main(){
	for(int i=0; i<=12; i++){
		for(int k=i; k>=0; k--){
			printf("%d ",k);
		}
		printf("\n");
	}
	return 0;
}
