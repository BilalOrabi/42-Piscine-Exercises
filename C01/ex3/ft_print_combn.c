/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilal.orabi <bilal.orabi@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:04:58 by bilal.orabi       #+#    #+#             */
/*   Updated: 2025/07/08 18:34:41 by bilal.orabi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int n, char *arr)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (arr[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	print_rec(int n, int index, int value, char *arr)
{
	if (index == n)
	{
		ft_print(n, arr);
		return ;
	}
	while (value <= 9)
	{
		arr[index] = value;
		print_rec(n, index + 1, value + 1, arr);
		value++;
	}
}

void	ft_print_combn(int n)
{
	char	arr[10];

	if (n <= 0 || n >= 10)
		return ;
	print_rec(n, 0, 0, arr);
	write(1, "\n", 1);
}
