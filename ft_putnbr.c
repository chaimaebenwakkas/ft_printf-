/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:38:13 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/23 10:21:36 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int count_nb(long long nb)
{
    int i;

    i = 0;
    if (nb < 0)
    {
        nb *= -1;
        i++;
    }
    while (nb != 0)
    {
        nb = nb / 10;
        i++;
    }
    return (i);   
}

int ft_putnbr (int n)
{
    long nb;
    nb = (long)n;
    if (nb < 0)
    {
        nb *= -1;
        ft_putchar ('-'); 
    }
    if (nb < 10)
    {
        ft_putchar(nb + 48);
    }
    else{
        ft_putnbr (nb / 10);
        ft_putnbr (nb % 10);
    }
    return (count_nb(n));
}
