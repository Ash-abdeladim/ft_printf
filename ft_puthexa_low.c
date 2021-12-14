/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_low.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:58:08 by aabdelad          #+#    #+#             */
/*   Updated: 2021/12/13 14:50:18 by aabdelad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_low(unsigned long long n)
{
	char	*hex_down;
	int		len;

	len = 0;
	hex_down = "0123456789abcdef";
	if (n < 16)
	{
		len += write (1, hex_down + n, 1);
	}
	if (n >= 16)
	{	
		len += ft_puthexa_low (n / 16);
		len += ft_puthexa_low (n % 16);
	}
	return (len);
}
