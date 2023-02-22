/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:43:24 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/02/22 16:42:16 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	// char a = 'a';
	// char str[50] = "asdsadasdasdasdasdasdasd\0";
	// long num = -500000000000;
	// long i = -42;
	// unsigned int u = 747385742;
	// int x= 42;
	// int X= 42;
	printf("\n");
	ft_printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n\n");
	system("leaks main.out");
}
