/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 18:36:38 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/23 10:23:16 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

 int pointers(void *ptr)
 {
     unsigned long x;
     x = (unsigned long)ptr;
     ft_putstr ("0x");
     return (ft_putnbr_base_ptr(x,HEXLOW) + 2);
 }
