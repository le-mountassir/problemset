#include <unistd.h>
int main(int argc, char *argv[]){
	int i;
	i = 0;
	char h;
	if(argc != 2){
		write(1, "a\n", 2);
	}	
	else{
		while(argv[1][i]){
		if(argv[1][i] == 'a'){
			h = i + '0';
			write(1, &argv[1][i], 1);
			write(1, "\n", 1);	
			}
			i++;
		}
	}
	return 0;
}
