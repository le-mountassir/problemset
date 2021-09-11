#include <stdio.h>

int	main()
{
	int	i;

	i = 0;
	scanf("%d", &i);

	if((i % 2) == 0 && i != 2)
		printf("YES");
	else
		printf("NO");
	return 0;
}
