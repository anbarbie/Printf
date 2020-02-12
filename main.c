/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 16:55:31 by antbarbi          #+#    #+#             */
/*   Updated: 2020/02/12 14:25:05 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./srcs/ft_printf.h"
#include "./libft/libft.h"

int		main(int ac, char **av)
{
	int  n_bytes;
	int a = 12345;

	if (ac != 3)
		return (-1);
	n_bytes = printf("%d %s\n", a, av[1]);
	printf("bytes : %d\n", n_bytes);
	ft_printf("ft_printf : %s\n", av[1]);
	return (0);
}