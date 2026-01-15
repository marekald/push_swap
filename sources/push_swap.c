/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:03:41 by marekald          #+#    #+#             */
/*   Updated: 2026/01/15 19:49:39 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/push_swap.h"

int	ft_isnum(int num)
{
	while ()
}

ft_check_arg(int argc, char **argv)
{
	// no puede ser letra, repetirse o estar fuera del rango de INT
	int	num;
	int i;

	i = 1;
	while (argv[i])
	{
		num = ft_atoi(argv[i]);
		if (ft_isnum(num) != 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (-1);
	(void)argv;
	ft_check_arg(argc, argv);
}
