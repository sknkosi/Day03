/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:37:52 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/24 09:38:08 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;

	*tmp = *a;
	*a /= *b;
	*b = *tmp % b;
}
