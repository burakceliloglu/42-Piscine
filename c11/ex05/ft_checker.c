void	ft_putstr(char *str);

int	ft_checker(int second, char operator)
{
	if (second == 0 && (operator == '%' || operator == '/'))
	{
		if (operator == '%')
			ft_putstr("Stop : division by zero");
		if (operator == '/')
			ft_putstr("Stop : modulo by zero");
		return (0);
	}
	if (operator != '%' && operator != '/' && 
		operator != '+' && operator != '-' && operator != '*')
		return (0);
	return (1);
}