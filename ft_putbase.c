/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:49:52 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/02/22 16:31:54 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putbase(long num, char *base)
{
	int		lenbase;

	lenbase = ft_strlen(base);
	if ((num / lenbase) < 1)
		ft_putchar(base[num]);
	else
	{
		ft_putbase(num / lenbase, base);
		ft_putchar(base[num % lenbase]);
	}
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	ft_putptr(unsigned long num, char *base)
{
	int		lenbase;

	lenbase = ft_strlen(base);
	ft_putstr("0x");
	if ((num / lenbase) < 1)
		ft_putchar(base[num]);
	else
	{
		ft_putbase(num / lenbase, base);
		ft_putchar(base[num % lenbase]);
	}
}
