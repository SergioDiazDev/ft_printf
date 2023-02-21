/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:43:24 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/02/21 17:09:32 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int	main(void)
{
	char a = 'a';
	char str[4] = "asd\0";
	printf("\n");
	ft_printf("hol%c %s", a, str);
	printf("\n\n");
	//system("leaks main.out");
}
