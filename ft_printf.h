/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:40:07 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/25 16:36:34 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *frm, ...);
void	ft_args(char frm, void *c, int *len);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *str);
int		ft_putnbr_hex(long nb, char *base);
int		ft_putnbr_unsigned(unsigned int nb);
int		ft_pointers(void *ptr);
int		ft_putnbr_pointers(unsigned long nb, char *base);

#endif
