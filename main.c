/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:43:24 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/02/22 16:23:20 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	//ft_putbase(42, "0123456789\0");
	char a = 'a';
	char str[50] = "asdsadasdasdasdasdasdasd\0";
	long num = -500;
	long i = 42;
	unsigned int u = 747385742;
	int x= 42;
	int X= 42;
	printf("\n");
	ft_printf("c|%c|\ns|%s|\nd|%d|\ni|%i|\nu|%u|\nx|%x|\nX|%X|\n %%|%%|", a, str, num, i, u, x, X);
	printf("\n\n");
	//system("leaks main.out");
}
