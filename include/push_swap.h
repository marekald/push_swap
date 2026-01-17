/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:56:05 by marekald          #+#    #+#             */
/*   Updated: 2026/01/17 15:58:48 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# define DEC "0123456789"
# define HEX_MIN "0123456789abcdef"
# define HEX_MAYUS "0123456789ABCDEF"

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_printf(char const *format, ...);
int		ft_isdigit(int c);
int		ft_atoi(const char *c);
void	ft_error(void);
size_t	ft_strlen(const char *str);

#endif
