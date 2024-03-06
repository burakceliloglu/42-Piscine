int	check_sepator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	total_length(char *str, char *charset)
{
	return (1); //missing
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**last;

	last = (char **)malloc(sizeof(char) * total_length(str, charset)); 
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_sepator(str[i], charset))
			i++;
		if (str[i] == '\0')
		{
			last[j] = ' '; //missing
			j++;
		}
	}
	last[j] = 0;
	return (last);
}