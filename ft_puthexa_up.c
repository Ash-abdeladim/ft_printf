/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_up.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:00:15 by aabdelad          #+#    #+#             */
/*   Updated: 2021/12/13 14:49:52 by aabdelad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_up(unsigned long long n)
{
	char	*hex_up;
	int		len;

	hex_up = "0123456789ABCDEF";
	len = 0;
	if (n < 16)
	{
		len += write(1, hex_up + n, 1);
	}
	if (n >= 16)
	{
		len += ft_puthexa_up (n / 16);
		len += ft_puthexa_up (n % 16);
	}
	return (len);
}
