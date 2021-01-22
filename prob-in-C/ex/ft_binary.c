#include <unistd.h>
void ft_binary(unsigned char num){
	int bits;
	int inpu;
	inpu = num;
	bits = 128;
	while(num != 0){
		if(bits <= inpu){
			write(1, "1", 1);
			inpu = bits % inpu;
		}
		else{
			write(1, "0", 1);
		}
		bits/=2;
	}
}
