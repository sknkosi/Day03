/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:44:36 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/25 12:30:02 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function reverses the order of characters in a string and the return a str*/

char *ft_strrev(char *str)
{
	int	length;
	int	j;
	int	i;
	char temp;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	i = 0;
	j = length - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}
