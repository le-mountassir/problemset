#include <unistd.h>
char *ft_strcpy(char *s1, char s2){
	int i;
	int k;
	i=0;
	k=0;
	while(s1[i] != '\0'){
		s2[k] = s1[i];
		i++;
		k++;
	}
	s2[k+1]='\0';
	return (s2);
}
