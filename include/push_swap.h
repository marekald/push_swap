/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:56:05 by marekald          #+#    #+#             */
/*   Updated: 2026/01/18 11:59:03 by marekald         ###   ########.fr       */
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

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}	t_stack;

void	ft_error(void);
int		ft_printf(char const *format, ...);
int		ft_atoi(const char *c);
void	ft_error(void);
size_t	ft_strlen(const char *str);
int		ft_check_args(char **argv);

#endif
