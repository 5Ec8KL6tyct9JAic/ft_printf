/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvalerio <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:41:32 by mako0             #+#    #+#             */
/*   Updated: 2023/04/10 12:55:28 by dvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexlen(unsigned int n)
{
    int i;

    i = 0;
    while (n != 0)
    {
        n /= 16;
        i++;
    }
    return (i);
}

void	ft_hexval(unsigned int n, const char form)
{
	// Si n est supérieur ou égal à 16, la fonction est appelée de manière récursive
	// pour afficher chaque chiffre hexadécimal de n
	if (n >= 16)
	{
		// On affiche d'abord le chiffre de poids fort de n en appelant récursivement la fonction
		// sur la division entière de n par 16, qui donne le quotient
		ft_hexval(n / 16, form);
		// Puis on affiche le chiffre de poids faible de n en appelant récursivement la fonction
		// sur le reste de la division de n par 16, qui donne le reste
		ft_hexval(n % 16, form);
	}
	else
	{
		// Si n est inférieur à 16, on affiche le caractère correspondant à la valeur hexadécimale de n
		// Les chiffres de 0 à 9 sont affichés en tant que caractères numériques,
		// tandis que les chiffres de 10 à 15 sont affichés en tant que lettres majuscules ou minuscules
		if (n <= 9)
			ft_putchar(n + 48); // '0' a une valeur ASCII de 48
		else
		{
			if (form == 'x')
				ft_putchar(n - 10 + 'a'); // 'a' a une valeur ASCII de 97
			if (form == 'X')
				ft_putchar(n - 10 + 'A'); // 'A' a une valeur ASCII de 65
		}
	}
}

int	ft_printhex(unsigned int n, const char form)
{
	// Si n est égal à zéro, on affiche simplement le caractère '0' et on retourne 1
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	// Sinon, on appelle la fonction ft_hexval pour afficher la représentation hexadécimale de n
	else
		ft_hexval(n, form);
	
	// La fonction retourne la longueur de la chaîne de caractères affichée, c-à-d le n de chiffres hexa
	return (ft_hexlen(n));
}