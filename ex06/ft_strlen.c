/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:40:38 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/25 12:52:12 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function counts and returns the number of characters in a string*/

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i += 1;
	return (i);
}
