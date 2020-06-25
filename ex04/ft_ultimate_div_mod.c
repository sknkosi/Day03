/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:37:52 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/25 12:50:37 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp1;
	int tmp2;

	tmp1 = *a / *b;
	tmp2 = a* % *b;
	*a = tmp1;
	*b = tmp2;
}
