/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:42:52 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/02/22 16:37:30 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int		*len;
	int		i;
	va_list	ptr;

	va_start(ptr, str);
	len = &i;
	i = -1;
	while (str[++i])
		ft_switch(str, len, ptr);
	va_end(ptr);
	return (i);
}

void	ft_switch(char const *str, int *len, va_list ptr)
{
	if (str[*len] != '%')
		write(1, &str[*len], 1);
	else
	{
		(*len)++;
		if (str[*len] == 'c')
			ft_putchar(va_arg(ptr, int));
		else if (str[*len] == 's')
			ft_putstr(va_arg(ptr, char *));
		else if (str[*len] == 'p')
			ft_putptr(va_arg(ptr, unsigned long), "0123456789abcdef");
		else if (str[*len] == 'd')
			ft_putnbr(va_arg(ptr, long));
		else if (str[*len] == 'i')
			ft_putnbr(va_arg(ptr, long));
		else if (str[*len] == 'u')
			ft_putbase(va_arg(ptr, unsigned int), "0123456789");
		else if (str[*len] == 'x')
			ft_putbase(va_arg(ptr, int), "0123456789abcdef");
		else if (str[*len] == 'X')
			ft_putbase(va_arg(ptr, int), "0123456789ABCDEF");
		else if (str[*len] == '%')
			write(1, "%", 1);
	}
}
