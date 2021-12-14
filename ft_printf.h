/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 23:14:10 by aabdelad          #+#    #+#             */
/*   Updated: 2021/12/12 18:11:08 by aabdelad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_check(char sp, va_list ptr, int *len);
int	ft_puthexa_low(unsigned long long n);
int	ft_puthexa_up(unsigned long long n);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int nb);
int	ft_putstr(char *s);
int	ft_printf(const char *sp, ...);

#endif
