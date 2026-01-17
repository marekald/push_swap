/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:03:41 by marekald          #+#    #+#             */
/*   Updated: 2026/01/17 15:58:00 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit (0);
}

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

int	ft_check_arg(char **argv)
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

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (-1);
	(void)argv;
	ft_check_arg(argv);
}
