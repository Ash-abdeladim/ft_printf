/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 21:21:17 by aabdelad          #+#    #+#             */
/*   Updated: 2021/12/13 15:03:09 by aabdelad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char sp, va_list ptr, int *len)
{
	if (sp == 's')
		*len += ft_putstr (va_arg(ptr, char *));
	if (sp == 'c')
		*len += ft_putchar (va_arg(ptr, int));
	if (sp == 'd' || sp == 'i')
		*len += ft_putnbr(va_arg(ptr, int));
	if (sp == 'u')
		*len += ft_putnbr_u(va_arg(ptr, unsigned int));
	if (sp == 'x')
		*len += ft_puthexa_low(va_arg(ptr, unsigned int));
	if (sp == 'X')
		*len += ft_puthexa_up(va_arg(ptr, unsigned int));
	if (sp == '%')
		*len += ft_putchar('%');
	if (sp == 'p')
	{
		write (1, "0x", 2);
		*len += ft_puthexa_low(va_arg(ptr, unsigned long long)) + 2;
	}
	return (*len);
}

int	ft_printf(const char *sp, ...)
{
	va_list	ptr;
	int		lenght;

	lenght = 0;
	va_start(ptr, sp);
	while (*sp)
	{
		if (*sp == '%')
		{
			sp++;
			ft_check(*sp, ptr, &lenght);
		}
		else
			lenght += ft_putchar(*sp);
		sp++;
	}
	va_end(ptr);
	return (lenght);
}

#include<stdio.h>
int main()
{
	char fmt[] = "%d %s";
	int d;
	d = printf(fmt, 32, "dfdsg");
	fflush(stdout);
	printf("(%d)\n", d);
	fflush(stdout);
	d = ft_printf(fmt, 32, "dfdsg");
	printf("(%d)\n", d);
	fflush(stdout);
	
}
