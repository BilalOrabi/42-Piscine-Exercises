/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilal.orabi <bilal.orabi@learner.42.tech>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 01:05:20 by bilal.orabi       #+#    #+#             */
/*   Updated: 2025/07/13 13:14:01 by bilal.orabi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_start_of_word;

	i = -1;
	is_start_of_word = 1;
	while (str[++i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (is_start_of_word)
				str[i] -= 32;
			is_start_of_word = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!is_start_of_word)
				str[i] += 32;
			is_start_of_word = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			is_start_of_word = 0;
		else
			is_start_of_word = 1;
	}
	return (str);
}
