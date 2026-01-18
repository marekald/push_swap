/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 19:55:04 by marekald          #+#    #+#             */
/*   Updated: 2026/01/17 20:42:49 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[i] == '-')
		i++;
	while (num[i])
	{
		if (ft_isdigit(num[i]) != 1)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_args(char **argv)
{
	int	num;
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		num = ft_atoi(argv[i]);
		if (ft_isnum(argv[i]) != 1)
			ft_error();
		j = i + 1;
		while (argv[j] != NULL)
		{
			if (ft_atoi(argv[j]) == num)
				ft_error();
			j++;
		}
		if (num >= INT_MAX || num <= INT_MIN)
			ft_error();
		i++;
	}
	return (1);
}