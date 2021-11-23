#include <unistd.h>
int main(int argc, char *argv[]){
	int i;
	int n;
	i = 0;
	if(argc > 3){
		while(argv[1][i] != '\0'){
			n=0;
			while(argv[2][n] != '\0'){
				if(argv[1][i] == argv[2][n]){
					argv[1][i] = argv[3][n];
				}
				n++;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
