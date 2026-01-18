/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:03:41 by marekald          #+#    #+#             */
/*   Updated: 2026/01/17 20:52:11 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	**stack_a;
	t_stack	**stack_b;
	
	if (argc < 2)
		return (0);
	(void)argv;
	ft_check_args(argv);
	stack_a = (t_stack **)malloc(sizeof(t_stack));
	if (!stack_a)
		return (NULL);
	*stack_a = NULL;
	
}
