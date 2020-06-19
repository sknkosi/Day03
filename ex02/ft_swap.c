/*The function swaps value of two integers whose addresses are entered as parameters*/

void ft_swap(int *a, int *b)
{
	int	tmp;

	*tmp = *a;
	*a = *b;
	*b = *tmp;
}
