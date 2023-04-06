/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvalerio <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:18:30 by mako0             #+#    #+#             */
/*   Updated: 2023/04/03 13:27:40 by dvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putstr(char *str);
int		ft_putchar(char c);
char	*ft_itoa(int n);
int		ft_printnbr(int n);
int		ft_printhex(unsigned int n, const char form);
int		ft_putperc(char c);
int		ft_printptr(void *n, const char form);
int		ft_putnbr(unsigned int n);

#endif