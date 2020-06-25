/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:39:15 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/25 13:01:13 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*The function ptints a string of characters on a standard output.*/

void ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
	{
		ft_putchar(str[i]);
	}
}
