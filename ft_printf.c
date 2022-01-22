/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcombeau <mcombeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:21:32 by mcombeau          #+#    #+#             */
/*   Updated: 2021/12/17 16:22:15 by mcombeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg(char spec, va_list args, t_flags flags)
{
	int	count;

	count = 0;
	if (spec == '%')
		count += ft_print_char('%', flags);
	else if (spec == 'c')
		count += ft_print_char(va_arg(args, int), flags);
	else if (spec == 's')
		count += ft_print_str(va_arg(args, const char *), flags);
	else if (spec == 'd' || spec == 'i')
		count += ft_print_int(va_arg(args, int), flags);
	else if (spec == 'x')
		count += ft_print_hex(va_arg(args, unsigned int), 0, flags);
	else if (spec == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), 1, flags);
	else if (spec == 'u')
		count += ft_print_unsigned(va_arg(args, unsigned int), flags);
	else if (spec == 'p')
		count += ft_print_ptr((unsigned long int)va_arg(args, void *), flags);
	else
	{
		count += ft_print_c('%');
		count += ft_print_c(spec);
	}
	return (count);
}

int	ft_parse_flags(const char *str, int i, va_list args, t_flags *flags)
{
	while (str[i] && (ft_isspec(str[i]) || ft_isflag(str[i]) || ft_isdigit(str[i])))
	{
		if (str[i] == '-')
			*flags = ft_flag_left(*flags);
		if (str[i] == '#')
			flags->hash = 1;
		if (str[i] == ' ')
			flags->space = 1;
		if (str[i] == '+')
			flags->plus = 1;
		if (str[i] == '0' && flags->left == 0 && flags->width == 0)
			flags->zero = 1;
		if (str[i] == '.')
			i = ft_flag_precision(str, i, args, flags);
		if (str[i] == '*')
			*flags = ft_flag_width(args, *flags);
		if (ft_isdigit(str[i]))
			*flags = ft_flag_digit(str[i], *flags);
		if (ft_isspec(str[i]))
		{
			flags->spec = str[i];
		//	printf("\nflags.spec = %c\n", (char)flags->spec);
			break ;
		}
		i++;
	}
	return (i);
}

int	ft_parse(char *str, va_list args)
{
	int		i;
	int		x;
	int		count;
	t_flags	flags;

	i = 0;
	x = 0;
	count = 0;
	while (str[i])
	{
		flags = ft_flags_init();
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			x = ft_parse_flags(str, i + 1, args, &flags);
			if (flags.spec != 0)
				i = x;
			else
				flags = ft_flags_init();
			if (str[i] != '\0' && ft_isspec(str[i]))
				count += ft_print_arg(str[i], args, flags);
			else if (str[i] != '\0')
				count += ft_print_c(str[i]);
		}
		else
			count += ft_print_c(str[i]);
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			count;
	char		*str;

	str = ft_strdup(format);
	count = 0;
	va_start(args, format);
	count = ft_parse(str, args);
	va_end(args);
	free(str);
	return (count);
}
