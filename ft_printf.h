/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:43:11 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/02/21 17:07:32 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
void	ft_switch(char const *str, int *len, va_list ptr);
void	ft_putchar(char c);
void	ft_putstr(char *s);

#endif
