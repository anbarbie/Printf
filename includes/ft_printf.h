/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 16:58:02 by antbarbi          #+#    #+#             */
/*   Updated: 2020/02/26 16:12:31 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
# 	define BUFFER_SIZE 4096
# endif

typedef struct		s_flags
{
	int			minus;
	int			zero;
/*	int			apostrophe;
	int			hash;
	int			space;
	int			plus;*/
}					t_flags;

typedef struct		s_width
{
	int			padding;
	int			precision;
}					t_width;

typedef	struct		s_length
{
	int			hh;
	int			h;
	int			ll;
	int			l;
}					t_length;

typedef struct		s_type
{
	char		c;
}					t_type;

typedef struct		s_modulo
{
	char		buff[BUFFER_SIZE];
	int			fd;
	int			rt;
	size_t 		buff_index;
	t_flags		flags;
	t_width		width;
	t_length	length;
	t_type		type;
}					t_modulo;

void	ft_init_struct(t_modulo *mod);
void	ft_fill_buff_s(t_modulo *mod, int n, char *str);
int		ft_printf(const char *format, ...);
int		ft_read_conv(char *str, t_modulo *mod, va_list args);
int		ft_write_full_buff(t_modulo *mod);
int		ft_fill_buff_c(t_modulo *mod, char c);
int		ft_fill_padding(t_modulo *mod, int n, char c);
int		ft_c_conv(t_modulo *mod, int c);
int		ft_s_conv(t_modulo *mod, char *str);
int		ft_d_conv(t_modulo *mod, int c);
int		ft_x_conv(t_modulo *mod, int c, int hex);
int		ft_percent_conv(t_modulo *mod);
char	*ft_parse_flags(char *str, t_modulo *mod);
char	*ft_parse_width(char *str, t_modulo *mod, va_list args);
char	*ft_parse_length(char *str, t_modulo *mod);
char	*ft_parse_type(char *str, t_modulo *mod);

#endif