/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:42:52 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/02/21 13:53:43 by sdiaz-ru         ###   ########.fr       */
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
	{
		ft_switch(str, len, ptr);
	}
	va_end(ptr);
	return (1);
}

void	ft_switch(char const *str, int *len, va_list ptr)
{
	if (str[*len] != '%')
		write(1, &str[*len], 1);
	else
	{
		(*len)++;
		if (str[*len] == 'c')
			write(1, va_arg(ptr, char *), 1);
		else if (str[*len] == 's')
			write(1, "s", 1);
		else if (str[*len] == 'p')
			write(1, "p", 1);
		else if (str[*len] == 'd')
			write(1, "d", 1);
		else if (str[*len] == 'i')
			write(1, "i", 1);
		else if (str[*len] == 'u')
			write(1, "u", 1);
		else if (str[*len] == 'x')
			write(1, "x", 1);
		else if (str[*len] == 'X')
			write(1, "X", 1);
	}
}
