/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:25:33 by antbarbi          #+#    #+#             */
/*   Updated: 2020/02/12 16:52:55 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	int number = 9;

	printf("%-10d.\n", number);
    printf("%010d.\n", number);
    printf("%010d.\n", number);  
    printf("%-*d.\n", 3, number);
	printf(av[1], 9);
	return (0);
}