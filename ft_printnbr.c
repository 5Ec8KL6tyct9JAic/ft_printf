/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvalerio <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:05:57 by dvalerio          #+#    #+#             */
/*   Updated: 2023/04/10 12:55:30 by dvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int		len;
	char	*res;

	res = ft_itoa(n);
	len = ft_putstr(res);
	free(res);
	return (len);
}