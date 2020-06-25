/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:46:07 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/25 12:37:00 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int  ft_atoi(char *str)
  {
      int res;
      int sign;
      int i;
 
      res = 0;
      sign = 0;
      i = 0;
 
      while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
          i++;
      if (str[i] == '-')
          sign = 1;
      if (str[i] == '+' || str[i] == '-')
          i++;
 
          while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
          {
              res = res * 10;
              res += (int)str[i] - '0';
              i++;
          }
          if (sign == 1)
             return (-res);
          else
             return (res);
  }
