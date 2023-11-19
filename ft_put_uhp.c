/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uhp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krfranco <krfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:51:40 by krfranco          #+#    #+#             */
/*   Updated: 2023/11/19 02:41:39 by krfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nb, int ret)
{
	if (nb > 9)
		ret = ft_putnbr(nb / 10, ret);
	ret = ft_putchar(nb % 10 + 48, ret);
	return (ret);
}

int	ft_puthexa(unsigned int nb, char *base, int ret)
{
	if (nb < 16)
		ret = ft_putchar(base[nb], ret);
	else
	{
		ret = ft_puthexa(nb / 16, base, ret);
		ret = ft_puthexa(nb % 16, base, ret);
	}
	return (ret);
}
