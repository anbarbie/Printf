/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 16:58:02 by antbarbi          #+#    #+#             */
/*   Updated: 2020/02/13 20:16:26 by antbarbi         ###   ########.fr       */
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
	int			apostrophe;
	int			hash;
	int			space;
	int			plus;
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
	size_t 		buff_index;
	t_flags		flags;
	t_width		width;
	t_length	length;
	t_type		type;
}					t_modulo;

#endif