/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krfranco <krfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:34:09 by krfranco          #+#    #+#             */
/*   Updated: 2023/11/19 02:40:14 by krfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c, int ret);
int	ft_putstr(char *str, int ret);
int	ft_putnbr(int n, int ret);
int	ft_putunsigned(unsigned int nb, int ret);
int	ft_puthexa(unsigned int nb, char *base, int ret);
#endif