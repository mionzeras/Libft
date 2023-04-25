/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampos- <gcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:50:38 by gcampos-          #+#    #+#             */
/*   Updated: 2023/04/25 19:36:50 by gcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		soma;
	char	*s3;

	soma = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc(sizeof(soma));
	if (!s3)
		return (NULL);
	ft_strlcat(s3, s1, soma);
	ft_strlcat(s3, s2, soma + 1);
	return (s3);
}








//void	*ft_memcpy(void *dest, const void *src, size_t n)