/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:47:07 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/25 12:42:59 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_sort_integer_table(int *tab, int size)
{
    int i;
    int temp;
    int j;

    i = 0;
    j = 0;
    temp = 0;
    while (j++ < size)
    {
        i = 0;
        while (i++ < size)
        {
            if (tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
}
