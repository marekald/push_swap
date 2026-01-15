/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 19:44:51 by marekald          #+#    #+#             */
/*   Updated: 2026/01/15 20:47:05 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/push_swap.h"

int	ft_putnbr_base(char *base, long n)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(base);
	if (n < 0)
	{
		i += write(1, "-", 1);
		n = n * -1;
	}
	if (n > (len - 1))
		i += ft_putnbr_base(base, n / len);
	i += write (1, &base[n % len], 1);
	return (i);
}
