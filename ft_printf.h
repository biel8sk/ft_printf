/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 22:01:27 by gpires-c          #+#    #+#             */
/*   Updated: 2026/07/05 21:00:14 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *input, ...);
size_t	ft_putprt_fd(void *p, int fd);
char	*ft_revert_str(char *str);
void	ft_putunbr_fd(unsigned int n, int fd);
size_t	ft_nlen_hex(unsigned long n);
size_t	ft_puthex_fd(unsigned long number, char flag, int fd);

#endif
