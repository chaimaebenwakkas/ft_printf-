/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:57:09 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/23 10:24:01 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void argss(char frm, void *c, int *len)
{
        if (frm == 'c')
           *len += ft_putchar((char)c);
        else if (frm == 's')
              *len += ft_putstr((char *)c);
        else if (frm == 'd')                                                                                                                                                                                                                                                                                                                                                                               
            *len += ft_putnbr((int)c);
        else if (frm == 'i')
            *len += ft_putnbr((int)c);
        else if (frm == 'p')
            *len += pointers((void *)c);
        else if (frm == 'u')                                                                                                                                                                                                                                                                                                                                                                               
            *len += ft_putnbr_unsigned((unsigned int)c);
        else if (frm == 'x')
            *len += ft_putnbr_base((int)c, "0123456789abcdef");
        else if (frm == 'X')
            *len += ft_putnbr_base((int)c, "0123456789ABCDEF");
        
}

int	ft_printf(const char *ft, ...)
{
    
    va_list ptr;
    void *next;
    int len;
    va_start (ptr, ft);
    
    len = 0;
    while (*ft)
        {
            if (*ft == '%')
            {
                 ft++;
                if (*ft != '%')
                    next = va_arg(ptr,void *);
                argss(*ft,next , &len);
            }
              else
              {
                len += ft_putchar(*ft);
             }
             ft++;
        }
    va_end (ptr);
    return (len);
}

int main()
{
    int a = 1;
    ft_printf ("%p\n", &a);
   int l =  printf ("%p", &a);
    printf ("\n%d", l);
}