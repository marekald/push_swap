/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:33:02 by marekald          #+#    #+#             */
/*   Updated: 2026/01/18 11:58:51 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit (0);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int	ft_atoi(const char *c)
{
	int	i;
	int	num;
	int	neg;

	i = 0;
	neg = 1;
	num = 0;
	while (c[i] != '\0' && ((c[i] >= 7 && c[i] <= 13) || c[i] == 32))
		i++;
	if (c[i] != '\0' && (c[i] == '-' || c[i] == '+'))
	{
		if (c[i] == '-')
			neg = -1;
		i++;
	}
	while (c[i] != '\0')
	{
		if (c[i] < '0' || c[i] > '9')
			break ;
		num = 10 * num + (c[i] - 48);
		i++;
	}
	return (num * neg);
}
