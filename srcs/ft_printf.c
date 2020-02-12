/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 16:57:14 by antbarbi          #+#    #+#             */
/*   Updated: 2020/02/12 15:13:13 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int		read_format(char *dest, va_list list)
{
	while (*dest)
	{
		if (*dest == '%')
		{
			dest++;
			/*ft_parse_flags(dest);
			ft_parse_width(dest);*/
			ft_parse_conv(dest);
		}
		dest++;
	}
	return (0);
}

int		ft_printf(const char *format, ...)
{
	va_list	list;
	char	*dest;

	if (!(dest = ft_strdup(format)))
		return (-1);
	va_start(list, format);
	read_format(format, list, dest);
	va_end(list);;
	return ((int)ft_strlen(dest));
}
