/* if array is all 'a' then print 0 
otherwise print 1
int	function(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (0);
		i++;
	}
	return (1);
} 
*/

int	ft_any(char **tab, int(*f)(char*))
{
	int	i;

	i = 1;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	int result = ft_any(argv, &function);
	printf("%d", result);
}
*/