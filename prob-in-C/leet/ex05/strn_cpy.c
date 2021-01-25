#include <unistd.h>

char *strncpy(char *st, char *nd,unsigned int size){
	int i;
	i = 0;
	while(i <= size && nd[i] != '\0'){
		st[i] = nd[i];
		i++;
	}
	while(st[i] != '\0' && i < size){
		st[i]='\0';
		i++;
	}
	return (st);
}
