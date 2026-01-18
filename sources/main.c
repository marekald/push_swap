/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:03:41 by marekald          #+#    #+#             */
/*   Updated: 2026/01/18 11:26:04 by marekald         ###   ########.fr       */
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
	*stack_a = NULL;
	//llenar el stack a.
	//si está ordenado no devolver nada y liberar memoria.
	stack_b = (t_stack **)malloc(sizeof(t_stack));
	stack_b = NULL;
	//ordenar stack e imprimir los movimientos.
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
