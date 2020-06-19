/*The function reverses the order of characters in a string and the return a str*/

char *ft_strrev(char *str)
{
	int i;
	int	j;
	char tmp;

	i = 0;
	j = 0;
	while (str[i])
		i += 1;
	
	while ((i - 1) > j)
	{
		tmp = str[i];
		str[i--] = str[j];
		str[j++] = tmp;
	}
	return (str);
}
