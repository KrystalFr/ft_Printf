/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krfranco <krfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:37:54 by krfranco          #+#    #+#             */
/*   Updated: 2023/11/19 02:46:00 by krfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	arg_list(char c, va_list *args, int ret)
{
	if (c == 'c')
		ret = ft_putchar(va_arg(*args, int), ret);
	else if (c == 's')
		ret = ft_putstr(va_arg(*args, char *), ret);
	else if (c == 'd' || c == 'i')
		ret = ft_putnbr(va_arg(*args, int), ret);
	else if (c == 'u')
		ret = ft_putunsigned(va_arg(*args, unsigned int), ret);
	else if (c == 'x')
		ret = ft_puthexa(va_arg(*args, int), "0123456789abcdef", ret);
	else if (c == 'X')
		ret = ft_puthexa(va_arg(*args, int), "0123456789ABCDEF", ret);
	else
		ret = ft_putchar('%', ret);
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		ret;
	va_list	args;

	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			ret = arg_list(str[++i], &args, ret);
		else
			ft_putchar(str[i], ret);
		i++;
	}
	va_end(args);
	return (ret);
}

int main()
{
	char str[] = "CHAT";
	int i = 21343;
	ft_printf("mdrrr %x %%jaksosl\n %u, adh %s", i, i, str);
	return (0);
}
