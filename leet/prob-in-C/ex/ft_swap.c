#include <unistd.h>
void ft_swap(int *a, int *b){
	int j;
	j = *a;
	*a = *b;
	*b = j;
}
