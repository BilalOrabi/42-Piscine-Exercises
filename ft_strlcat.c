/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borabi <bilal.orabi@learner.42.tech>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 19:01:36 by borabi            #+#    #+#             */
/*   Updated: 2025/11/28 19:01:36 by borabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dst_len == size)
		return (size + src_len);
	while (src[i] && dst_len + 1 < size)
		dst[dst_len++] = src[i++];
	if (dst_len < size)
		dst[dst_len] = '\0';
	return (dst_len - i + src_len);
}
