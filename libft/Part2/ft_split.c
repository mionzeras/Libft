/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampos- <gcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:06:54 by gcampos-          #+#    #+#             */
/*   Updated: 2023/04/27 16:37:09 by gcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_wrd(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			j++;
		}
		i++;
	}
	return (j);
}

size_t	cliw(const char *str, char value)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != value)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	str_size;
	size_t	wrd_size;
	char	**str_final;

	if (!s)
		return (NULL);
	str_size = count_wrd(s, c);
	str_final = malloc((str_size + 1) * sizeof(char *));
	if (!str_final)
		return (NULL);
	i = 0;
	while (i < str_size)
	{
		while (*s && *s == c)
			s++;
		wrd_size = cliw(s, c);
		str_final[i] = ft_substr(s, 0, wrd_size);
		s = (s + wrd_size) + 1;
		i++;
	}
	str_final[str_size] = NULL;
	return (str_final);
}
