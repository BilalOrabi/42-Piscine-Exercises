/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raad.ali <raad.ali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 23:32:25 by raad.ali          #+#    #+#             */
/*   Updated: 2025/07/04 00:39:31 by raad.ali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	up(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('/');
		else if (i == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}

void	middle(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y - 2)
	{
		i = 1;
		while (i <= x)
		{
			if (i == 1 || i == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	down(int x, int y)
{
	int	i;

	if (y > 1)
	{
		i = 1;
		while (i <= x)
		{
			if (i == 1)
				ft_putchar('\\');
			else if (i == x)
				ft_putchar('/');
			else
				ft_putchar('*');
			i++;
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	up(x);
	middle(x, y);
	down(x, y);
}
