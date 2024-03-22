void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		int		first;
		char	operator;
		int		second;

		first = argv[1]; 
		operator = argv[2][0];
		second = argv[3];
		if (second == 0)
			ft_putstr("Stop : ... by zero");
		ft_calculator(first, operator, second);
	}
	return (0);
}
