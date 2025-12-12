/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borabi <bilal.orabi@learner.42.tech>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:36:06 by borabi            #+#    #+#             */
/*   Updated: 2025/11/28 15:36:06 by borabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
	{
		// copy forward
		while (len--)
			*d++ = *s++;
	}
	else
	{
		// copy backward
		while (len--)
			d[len] = s[len];
	}

	return (dst);
}
