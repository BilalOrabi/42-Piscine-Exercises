/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borabi <bilal.orabi@learner.42.tech>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:56:23 by borabi            #+#    #+#             */
/*   Updated: 2025/11/28 15:56:23 by borabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = 0;
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	if (c == 0)
	{
		ft_bzero(b, len);
		return (b);
	}
	while (len--)
		*p++ = (unsigned char)c;
	return (b);
}
