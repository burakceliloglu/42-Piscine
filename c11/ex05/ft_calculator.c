void	ft_putstr(char *str);
void	ft_putnbr(int nb);

void	ft_calculator(int first, int second, char operator)
{
	int	result;

	if (operator == '+')
		result = first + second;
	if (operator == '-')
		result = first - second;
	if (operator == '%')
		result = first % second;
	if (operator == '/')
		result = first / second;
	if (operator == '*')
		result = first * second;
	ft_putnbr(result);
}