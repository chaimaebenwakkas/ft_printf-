/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 13:15:27 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/25 16:20:08 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_base(long int nb)
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

int	ft_putnbr_hex(long nb, char *base)
{
	long long	n;

	n = nb;
	if (nb < 16)
	{
		ft_putchar(base[nb]);
	}
	else
	{
		ft_putnbr_hex(nb / 16, base);
		ft_putnbr_hex(nb % 16, base);
	}
	return (count_base(n));
}
