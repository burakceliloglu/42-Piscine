extern void	rush(int x, int y);

int	to_integer(char	**argv, int x)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (argv[x][i] != '\0')
	{
		result = result * 10 + argv[x][i] - '0';
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int	first;
	int	second;

	if (argc == 3)
	{
		first = to_integer(argv, 1);
		second = to_integer(argv, 2);
		rush(first, second);
	}
	
	return (0);
}
