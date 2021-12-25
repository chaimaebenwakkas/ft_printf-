/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pointers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 09:40:02 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/25 16:27:27 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	calculate_length_ptr(unsigned long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		i++;
	while (nb > 0)
	{
		i++;
		nb /= 16;
	}
	return (i);
}

int	ft_putnbr_pointers(unsigned long nb, char *base)
{
	if (nb < 16)
	{
		ft_putchar(base[nb]);
	}
	else
	{
		ft_putnbr_hex(nb / 16, base);
		ft_putnbr_hex(nb % 16, base);
	}
	return (calculate_length_ptr(nb));
}
