int	ft_strlen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	char	*temp;
	int		length;

	length = ft_strlen(tab);
	length--;
	while (length > 1)
	{
		i = 1;
		while (i < length)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		length--;
	}
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	int		i;

	ft_sort_string_tab(argv);
	i = 1;
	while (i < argc)
	{
		printf("%s ", argv[i]);
		i++;
	}
}