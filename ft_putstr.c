/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:30:10 by aabdelad          #+#    #+#             */
/*   Updated: 2021/12/12 21:34:41 by aabdelad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[len] != '\0')
	{
		ft_putchar(s[len]);
		len++;
	}
	return (len);
}
// #include<stdio.h>
// int main()
// {
// 	int i = ft_printf("  %%   ");
// 	printf("\n%d", i);
// }
