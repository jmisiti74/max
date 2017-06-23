/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmisiti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 14:45:01 by jmisiti           #+#    #+#             */
/*   Updated: 2017/06/23 14:49:22 by jmisiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_putchar('S');
	ft_putchar('a');
	ft_putchar('l');
	ft_putchar('u');
	ft_putchar('t');
	ft_putchar('\n');
	return (0);
}
