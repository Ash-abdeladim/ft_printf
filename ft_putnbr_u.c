/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:19:47 by aabdelad          #+#    #+#             */
/*   Updated: 2021/12/12 18:06:01 by aabdelad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb < 10)
	{
		len += ft_putchar(nb + 48);
	}
	else
	{
		len += ft_putnbr_u(nb / 10);
		len += ft_putnbr_u(nb % 10);
	}
	return (len);
}
