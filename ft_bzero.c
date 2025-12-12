/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borabi <bilal.orabi@learner.42.tech>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:47:11 by borabi            #+#    #+#             */
/*   Updated: 2025/11/28 15:47:11 by borabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t		i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}