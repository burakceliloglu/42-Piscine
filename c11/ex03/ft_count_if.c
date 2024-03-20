/* if one of the char array doesnt
contain 'a', then count++
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

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

/* main
#include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	int result = ft_count_if(argv, argc, &function);
	printf("%d", result);
}
*/
