#include <unistd.h>
#include <stdio.h>
char *strcpy(char *st, char *nd){
	int i;
	i=0;
	while(nd[i] != '\0'){
		nd[i]=st[i];
		i++;
	}
	nd[i+1] = '\0';
	return (nd);
}
int main(){
	char hi[] = strcpy("asaddada", "wdadwa");
	int i =0;
	while(i < 19){
		printf("%c", hi[i]);
		i++;
	}
	return 0;
}
