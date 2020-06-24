/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:47:07 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/24 09:47:49 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i++ < size)
	{
		j = i + 1;
		while (j-- > 0)
		{
			if (tab[j] < tab[j - 1])
			{
				tmp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = tmp;
			}
		}
	}
}
