/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilal.orabi <bilal.orabi@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:21:46 by bilal.orabi       #+#    #+#             */
/*   Updated: 2025/07/14 14:53:48 by bilal.orabi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
		{
			count++;
		}
		i++;
	}
	return (count);
}
