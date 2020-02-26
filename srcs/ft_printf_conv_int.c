/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conv_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 15:40:18 by antbarbi          #+#    #+#             */
/*   Updated: 2020/02/26 16:13:17 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

int		ft_d_conv(t_modulo *mod, int c)
{
	char	*str;

	str = ft_itoa(c);
	ft_fill_buff_s(mod, ft_strlen(str), str);
	return (0);
}

int		ft_u_conv(t_modulo *mod, int c)
{
	return (0);
}

int		ft_x_conv(t_modulo *mod, int c, int hex)
{
	if (hex == 0)
	{
		ft_itoa_base
	}
	else
	{

	}
	return (0);
}
