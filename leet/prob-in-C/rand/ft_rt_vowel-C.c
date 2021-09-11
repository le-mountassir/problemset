#include <stdio.h>
int vowel_counter(char *str){
	int i =0, k=0;
	while(str[i]!='\0'){
		if(str[i] > 'u' || (str[i] > 'U' && str[i] < 'a')){
			k++;	
		}
		i++;
	}
	return k;
}
int main(){
	char inp[]="fiewufwiiie";
	int u;
	
	printf("write a word or a phrase: \n");
	//scanf("%s", &inp);
	u=vowel_counter(inp);
	printf("%d", u);
	return 0;
}
