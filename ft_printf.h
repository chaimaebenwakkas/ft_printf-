/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:40:07 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/23 10:33:42 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <unistd.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#define HEXLOW  "0123456789abcdef"

int     ft_printf(const char *ft, ...);
void    argss(char frm, void *c, int *len);
int     ft_putchar(char c);
int     ft_putnbr (int n);
int     ft_putstr(char *str);
int     ft_putnbr_base(long nb, char *base);
int     ft_strlen(char *str);
int     ft_putnbr_unsigned (unsigned int nb);
int     pointers(void *ptr);
int	    ft_putnbr_base_ptr(unsigned long nb, char *base);

#endif