void	ft_putstr(char *str);
void	ft_map(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_map(argv[1]);
	}
	else
		ft_putstr("Error");
}