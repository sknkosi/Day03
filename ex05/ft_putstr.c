/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:39:15 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/24 09:39:37 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function ptints a string of characters on a standard output.*/

int	ft_putchar(char c);

void ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}
