/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvalerio <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:20:17 by mako0             #+#    #+#             */
/*   Updated: 2023/04/03 15:18:03 by dvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printarg(va_list arfs, char c);
{
    int size;

    size = 0;
    if(c == 'c')
        size += ft_putchar(va_arg(args, int));
    else if (c == 's')
        size += ft_putstr(va_arg(args, char *)),
    else if (c == 'p')
        size += ft_printptr(va_arg(args, void *), 'x');
    else if (c == 'd')
        size += ft_printnbr(va_args(args, int));
    else if (c == 'i')
        size += ft_printnbr(va_arg(args, int));
    else if (c == 'u')
        size += ft_putnbr(va_arg(args, unsigned int));
    else if (c == 'x')
        size += ft_printhex(va_args(args, unsigned int));
    else if (c == 'X')
        size += ft_printhex(va_args(args, unsigned int));
    else if (c == '%')
        size += ft_putchar('%');
    return (size);
}

int ft_printf(char const *str, ...)
{
    va_list args;
    int i;
    int size;

    i = 0;
    size = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            size += ft_printarg(args, stri, str[i + 1]);
            i++;
        }
        else
        {
            ft_putchar(str[i]);
            size++;
        }
        i++;
    }
    va_end(args);
    return (size);
}