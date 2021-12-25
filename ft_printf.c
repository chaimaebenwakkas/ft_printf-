/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:57:09 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/25 18:46:07 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_args(char frm, void *c, int *len)
{
	if (frm == 'c')
		(*len) += ft_putchar((char)c);
	else if (frm == 's')
		(*len) += ft_putstr((char *)c);
	else if (frm == 'd' || frm == 'i')
		(*len) += ft_putnbr((int)c);
	else if (frm == 'p')
		(*len) += ft_pointers((void *)c);
	else if (frm == 'u')
		(*len) += ft_putnbr_unsigned((unsigned int)c);
	else if (frm == 'x')
		(*len) += ft_putnbr_hex((unsigned int)c, "0123456789abcdef");
	else if (frm == 'X')
		(*len) += ft_putnbr_hex((unsigned int)c, "0123456789ABCDEF");
	else if (frm == '%')
		(*len) += ft_putchar('%');
}

int	ft_printf(const char *frm, ...)
{
	va_list		ptr;
	void		*next;
	int			len;

	va_start (ptr, frm);
	len = 0;
	while (*frm)
	{
		if (*frm == '%')
		{
			frm++;
			if (*frm != '%')
				next = va_arg(ptr, void *);
			ft_args(*frm, next, &len);
		}
		else
		{
			len += ft_putchar(*frm);
		}
		frm++;
	}
	va_end (ptr);
	return (len);
}
