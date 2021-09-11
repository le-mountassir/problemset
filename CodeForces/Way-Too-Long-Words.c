#include <stdio.h>
int len(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	char **words;
	int wd = 0;
	for(; wd < 100; wd++)
	{
		scanf("%s", &words[wd]);
		if (!(words[wd]))
			break;
	}
	int k = 0;
	while (k < wd)
	{
		if (len(words[k]) == i)
			printf("%s", words[k]);
		else
			printf("%c%d%c", words[k][0], len(words[k]), words[k][len(words[k]-1)]);
		k++;
	}
	return 0;
}
