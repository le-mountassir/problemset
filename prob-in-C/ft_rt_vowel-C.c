#include <stdio.h>
int vowel_counter(char *str){
	int i =0, k=0;
	while(str[i]!='\0'){
		if(str[i]=='a'||str[i]=='i'||str[i]=='u'||str[i]=='e'||str[i]=='o'||str[i]=='A'||str[i]=='I'||str[i]=='U'||str[i]=='E'||str[i]=='O'){
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
