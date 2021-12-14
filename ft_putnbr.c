/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:19:09 by aabdelad          #+#    #+#             */
/*   Updated: 2021/12/13 02:17:14 by aabdelad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int			len;
	long long	nb;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		len += ft_putchar('-');
	}
	if (nb < 10)
	{
		len += ft_putchar(nb + '0');
	}
	else
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	return (len);
}