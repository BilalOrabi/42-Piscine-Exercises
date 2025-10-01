/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilal.orabi <bilal.orabi@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:21:16 by bilal.orabi       #+#    #+#             */
/*   Updated: 2025/07/09 12:09:00 by bilal.orabi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int		first;
	int		second;
	int		third;

	first = 0;
	while (first <= 7)
	{
		second = first + 1;
		while (second <= 8)
		{
			third = second + 1;
			while (third <= 9)
			{
				ft_putchar(first + '0');
				ft_putchar(second + '0');
				ft_putchar(third + '0');
				if (first != 7)
					write(1, ", ", 2);
				third++;
			}
			second++;
		}
		first++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
