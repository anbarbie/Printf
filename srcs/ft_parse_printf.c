/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:36:17 by antbarbi          #+#    #+#             */
/*   Updated: 2020/02/12 16:40:04 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_parse_flags(char *dest)
{
	if (*dest == '-')
	if (*dest == '0' || *dest == '.')
	if (*dest == '*')

	return (dest);
}

char	*ft_parse_width(char *dest)
{
	if (atoi(dest))
	{
		
	}
	return (dest);
}

char	*ft_parse_conv(char *dest, va_list list)
{
	if (*dest == 'c')
	if (*dest == 's')
	if (*dest == 'p')
	if (*dest == 'i')
	if (*dest == 'd')
	if (*dest == 'u')
	if (*dest == 'x')
	if (*dest == 'X')
	
	return (dest);
}
