/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilal.orabi <bilal.orabi@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 22:31:33 by bilal.orabi       #+#    #+#             */
/*   Updated: 2025/07/19 22:31:35 by bilal.orabi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_digit_places(int nbr, char *base, int i)
{
	int			size;
	long int	n;

	size = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= size)
	{
		n /= size;
		i++;
	}
	i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base, char *converted)
{
	int		size;
	long	n;
	int		first;
	int		last;

	size = ft_strlen(base);
	last = ft_digit_places(nbr, base, 0);
	n = nbr;
	first = 0;
	if (n < 0)
	{
		converted[0] = '-';
		n *= -1;
		first++;
	}
	last--;
	while (n >= size)
	{
		converted[last] = base[n % size];
		n /= size;
		last--;
	}
	if (n < size)
		converted[first] = base[n];
}
