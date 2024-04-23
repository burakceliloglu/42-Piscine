#include <stdlib.h>

void	ft_map(char *str)
{
	int	*array;
	int	i;

	array = (int *)malloc(sizeof(int) * 16);
	array = ft_split(str, array);
	i = 0;
	while (array[i] != '\0')
	{
		
	}
	free(array);
}