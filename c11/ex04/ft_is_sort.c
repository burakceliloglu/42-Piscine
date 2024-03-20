/*
int	ft_intcmp(int x, int y)
{
	return (x - y);
}
*/

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main()
{
	int	array[5] = {1,2,3,6,7};
	int result = ft_is_sort(array, 5, &ft_intcmp);
	printf("%d", result);
}
*/