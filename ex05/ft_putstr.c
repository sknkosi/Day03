/*The function ptints a string of characters on a standard output.*/

int	ft_putchar(char c);

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}
