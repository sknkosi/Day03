
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:29:29 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/24 15:56:58 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*The function takes a pointer to int as a parameter, and sets the value "42"to that int*/

void ft_ft(int *nbr)
{
	nbr = 42;
	printf("%d",nbr);
}

int main()
{
	int *n;
	n = 42;
	ft_ft(&n);
	return 0;
}

