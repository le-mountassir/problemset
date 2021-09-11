#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
char *st_strrev(char *str){
	int i;
	int k;
	i=0;
	k=0;
	char chassy;
	while(str[k] != '\0'){
		k++;
	}
	k-=1;
	while(k > i){
		chassy = str[i];
		str[i] = str[k];
		str[k] = chassy;		
		k--;
		i++;
	}
	return (str);
}
