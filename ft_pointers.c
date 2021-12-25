/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 18:36:38 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/25 16:18:53 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointers(void *ptr)
{
	unsigned long	x;

	x = (unsigned long)ptr;
	ft_putstr("0x");
	return (ft_putnbr_pointers(x, "0123456789abcdef") + 2);
}
