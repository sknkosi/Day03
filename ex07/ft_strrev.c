/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:44:36 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/24 09:45:11 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function reverses the order of characters in a string and the return a str*/

char *ft_strrev(char *str)
{
	int i;
	int	j;
	char tmp;

	i = 0;
	j = 0;
	while (str[i])
		i += 1;
	
	while ((i - 1) > j)
	{
		tmp = str[i];
		str[i--] = str[j];
		str[j++] = tmp;
	}
	return (str);
}
