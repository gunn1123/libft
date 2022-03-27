/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cthamsur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:39:03 by cthamsur          #+#    #+#             */
/*   Updated: 2022/03/27 20:44:19 by cthamsur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{	
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		++str;
	if (*str == '+' || *str == '-')
	{
		if (*(str++) == '-')
			sign *= -1;
	}
	while (ft_isdigit(*str))
	{
		result = result * 10;
		result += (*str++ - '0');
	}
	return (sign * result);
}
