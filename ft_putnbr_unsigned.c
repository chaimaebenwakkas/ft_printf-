/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:02:40 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/23 10:21:48 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int count_n_u(unsigned int nb)
{
    int i;

    i = 0;
    while (nb != 0)
    {
        nb = nb / 10;
        i++;
    }
    return (i);   
}

int ft_putnbr_unsigned (unsigned int n)
{
    unsigned long	nb;

	nb = (long)n;
    if (nb < 10)
    {
        ft_putchar (nb + 48);
    }
    else 
    {
        ft_putnbr_unsigned (nb / 10);
        ft_putnbr_unsigned (nb % 10);
    }
    return (count_n_u(nb));
}