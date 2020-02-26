/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 16:57:14 by antbarbi          #+#    #+#             */
/*   Updated: 2020/02/26 15:51:03 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

void	ft_init_struct(t_modulo *mod)
{
	mod->flags.minus = 0;
	mod->flags.zero = 0;
	mod->width.padding = 0;
	mod->width.precision = -1;
	mod->length.hh = 0;
	mod->length.h = 0;
	mod->length.ll = 0;
	mod->length.l = 0;
	mod->fd = 1;
}

int		ft_read_conv(char *str, t_modulo *mod, va_list args)
{
	if (mod->type.c == 'c')
		ft_c_conv(mod, va_arg(args, int));
	if (mod->type.c == 's')
		ft_s_conv(mod, va_arg(args, char*));
	if (mod->type.c == '%')
		ft_percent_conv(mod);
	/*if (mod->type.c == 'p')
		ft_p_conv(mod, va_arg(args, void*));*/
	if (mod->type.c == 'i' || mod->type.c == 'd')
		ft_d_conv(mod, va_arg(args, int));
	/*if (mod->type.c == 'u')
		ft_u_conv(mod, va_arg(args, unsigned int));
	if (mod->type.c == 'x')
		ft_x_conv(mod, va_arg(args, unsigned int), 0);
	if (mod->type.c == 'X')
		ft_x_conv(mod, va_arg(args, unsigned int), 1);*/
	return (0);
}

int		ft_printf(const char *format, ...)
{
	va_list		args;
	t_modulo	mod;

	mod.buff_index = 0;
	va_start(args, format);
	while (*format)
	{
		ft_init_struct(&mod);
		if (*format == '%')
		{
			format++;
			/*format = ft_parse_flags(format, &mod);
			format = ft_parse_width(format, &mod, args);
			format = ft_parse_length(format, &mod);*/
			format = ft_parse_type((char *)format, &mod);
			ft_read_conv((char *)format, &mod, args);
		}
		else
			ft_fill_buff_c(&mod, *format);
		format++;
	}
	va_end(args);
	write(mod.fd, mod.buff, mod.buff_index);
	return (0);
}
