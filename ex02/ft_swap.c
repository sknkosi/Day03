/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:32:52 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/25 12:47:57 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function swaps value of two integers whose addresses are entered as parameters*/

void ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
