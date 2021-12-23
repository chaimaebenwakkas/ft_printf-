/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 13:15:27 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/23 10:30:35 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int count_base(long int nb)
{
    int i;
    i = 0;
    if (nb < 0)
        i++;
    while (nb > 0)
    {
        i++;
        nb /= 16;
        
    }  
    return (i); 
}
int ft_putnbr_base(long nb, char *base)
{
    long long	n;
	int			len;

	len = 0;
	if (nb < 0)
	{
		len++;
		ft_putchar ('-');
		nb = nb * -1;
	}
	n = nb;
	if (nb <= (long)ft_strlen(base) -1)
	{
		ft_putchar(base[nb]);
	}
	else
	{
		ft_putnbr_base(nb / 16, base);
		ft_putnbr_base(nb % 16, base);
	}
    return (count_base(n));
}