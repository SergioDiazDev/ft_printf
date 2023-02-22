/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:49:52 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/02/22 15:41:50 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putbase(long num, char *base)
{
	int		lenbase;
	//long	aux;

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
