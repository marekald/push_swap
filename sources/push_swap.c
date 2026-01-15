/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:03:41 by marekald          #+#    #+#             */
/*   Updated: 2026/01/15 20:53:01 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/push_swap.h"

void ft_error(char *s)
{
	ft_printf("%s\n", s);
	exit (0);
}

int	ft_isnum(char *num)
{
	int i;

	i = 0;
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
	int i;

	i = 1;
	while (argv[i])
	{
		num = ft_atoi(argv[i]);
		if (ft_isnum(argv[i]) != 1)
			return (0);
		while(argv[i] != NULL)
			if (ft_atoi(argv[i]) == num)
				return (0);
		if (num < INT_MAX && num > INT_MIN)
			return (0);
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
