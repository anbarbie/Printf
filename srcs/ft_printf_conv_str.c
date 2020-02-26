/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conv_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 14:51:23 by antbarbi          #+#    #+#             */
/*   Updated: 2020/02/26 15:40:03 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

int		ft_c_conv(t_modulo *mod, int c)
{
	ft_fill_buff_c(mod, c);
	return (0);
}

int		ft_s_conv(t_modulo *mod, char *str)
{
	ft_fill_buff_s(mod, ft_strlen(str), str);
	return (0);
}

int		ft_percent_conv(t_modulo *mod)
{
	ft_fill_buff_c(mod, '%');
	return (0);
}
