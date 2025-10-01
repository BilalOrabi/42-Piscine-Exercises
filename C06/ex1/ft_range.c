/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilal.orabi <bilal.orabi@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 22:27:34 by bilal.orabi       #+#    #+#             */
/*   Updated: 2025/07/19 22:27:36 by bilal.orabi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	s;
	int	*arr;

	i = 0;
	s = max - min;
	if (min >= max)
		return (0);
	arr = malloc(sizeof(int) * s);
	if (arr == NULL)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
