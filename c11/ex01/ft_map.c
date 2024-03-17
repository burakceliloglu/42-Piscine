#include <stdlib.h>

/*
int	rotone(int x)
{
	return (++x);
}
*/

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*array;

	array = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}

/*
#include <stdio.h>

int	main()
{
	int	tab[10] = {1,2,3,4,5,6,7,8,9,10};
	int	*array;
	int i;

	array = ft_map(tab, 10, &rotone);
	i = 0;
	while (i < 10)
	{
		printf("%d ", array[i]);
		i++;
	}
}
*/