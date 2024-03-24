int	ft_checker(int second, char operator);
int	ft_calculator(int first, int second, char operator);
int	ft_atoi(char *str);
void	ft_putchar(char ch);

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		int		first;
		char	operator;
		int		second;
		int		flag;

		first = ft_atoi(argv[1]); 
		operator = argv[2][0];
		second = ft_atoi(argv[3]);
		flag = ft_checker(second, operator);
		if (flag == 1)
			ft_calculator(first, second, operator);
		else
			ft_putchar('0');
	}
	return (0);
}