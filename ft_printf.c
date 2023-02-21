/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:42:52 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/02/21 17:26:45 by sdiaz-ru         ###   ########.fr       */
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
			write(1, "p", 1);
		else if (str[*len] == 'd')
			ft_putnbr(va_arg(ptr, int));
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	ft_putnbr(int n)
{
	char		*s;

	s = ft_itoa(n);
	ft_putstr(s);
	free(s);
}

char	*ft_loadstr(long n, long size)
{
	char		*str;

	str = (char *)malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[size--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (size != -1 && str[size] != '-')
	{
		str[size--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long		size;
	long		aux;
	char		*str;

	size = 0;
	aux = n;
	if (n == 0)
	{
		str = (char *)malloc((2) * sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n < 0)
		size++;
	while (aux != 0)
	{
		aux = aux / 10;
		size++;
	}
	return (ft_loadstr((long)n, size));
}