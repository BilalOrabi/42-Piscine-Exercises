/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raad.ali <raad.ali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:39:55 by raad.ali          #+#    #+#             */
/*   Updated: 2025/07/01 18:06:51 by raad.ali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			ft_putchar(av[j][i]);
			i++;
		}
		write(1, " ", 1);
		j++;
	}
	return (write(1, "\n", 1), 0);
}*/
