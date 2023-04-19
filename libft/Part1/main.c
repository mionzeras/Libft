/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampos- <gcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:12:12 by gcampos-          #+#    #+#             */
/*   Updated: 2023/04/18 15:37:11 by gcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("\n------ func: ft_isalpha ------\n");
	printf("%i\n", ft_isalpha('d'));
	printf("%i\n", ft_isalpha('8'));

	printf("\n------ func: ft_isdigit ------\n");
	printf("%i\n", ft_isdigit('4'));
	printf("%i\n", ft_isdigit('0'));
	printf("%i\n", ft_isdigit('B'));

	printf("\n------ func: ft_isalnum ------\n");
	printf("%i\n", ft_isalnum('a'));
	printf("%i\n", ft_isalnum('0'));
	printf("%i\n", ft_isalnum('/'));
	
	printf("\n------ func: ft_isascii ------\n");
	printf("%i\n", ft_isascii('a'));
	printf("%i\n", ft_isascii(130));
	
	printf("\n------ func: ft_isprint ------\n");
	printf("%i\n", ft_isprint('a'));
	printf("%i\n", ft_isprint(10));
	
	printf("\n------ func: ft_strlen ------\n");
	char	c[]="Gabriel Augusto";
	printf("Size of s: %lu\n", ft_strlen(c));

	printf("\n------ func: ft_memset ------\n");
	char	c1[30] = "Olha la quem vem";
	printf("Str before memset: %s\n", c1);
	ft_memset(c1, 'x', 3);
	printf("Str after memset: %s\n", c1);

	printf("\n------ func: ft_bzero ------\n");
	char	c2[]= "Gabriel";
	for (size_t i = 0; i < 7; i++)
	{
		printf("[%c]", c2[i]);
	}
	printf("\n");
	ft_bzero(c2, 3);
	for (size_t i = 0; i < 7; i++)
	{
		printf("[%c]", c2[i]);
	}
	printf("\n");
	
	printf("\n------ func: ft_memcpy ------\n");
	char	c3[] = "Ola mundo";
	char	c4[15] = "";
	printf("%s\n", c4);
	ft_memcpy(c4, c3, 15);
	printf("%s\n", c4);
	
	printf("\n------ func: ft_memmove ------\n");
	char	c5[] = "Ola mundo";
	char	c6[15];
	ft_memcpy(c6, c5, 15);
	printf("%s\n", c6);

	printf("\n------ func: ft_strlcpy ------\n");
	char	frase[] = "Aqui vai jsfdgd\n";
	char	recebe[15];
	printf("%ld, %s\n", ft_strlcpy(recebe, frase, 3), recebe);

	printf("\n------ func: ft_strlcat ------\n");
	char	dest[] = "Hello ";
	char	src[] = "World";
	printf("%ld, %s\n", ft_strlcat(dest, src, 20), dest);

	printf("\n------ func: ft_toupper ------\n");
	printf("%c\n", ft_toupper('g'));

	printf("\n------ func: ft_tolower ------\n");
	printf("%c\n", ft_tolower('G'));

	printf("\n------ func: ft_strchr ------\n");
	char	g[] = "If i had money";
	char	*ptr = ft_strchr(g, 'a');
	printf("A letra: %c, foi achada no indice: %ld\n", *ptr, ptr - g);
	printf("%s\n", ptr);
	
	printf("\n------ func: ft_strrchr ------\n");
	char	g1[] = "My name is Gabriel";
	char	*ptr1 = ft_strrchr(g1, '\0');
	printf("A letra: %c, foi achada no indice: %ld\n", *ptr1, ptr1 - g1);
	printf("%s\n", ptr1);

	printf("\n------ func: ft_strncmp ------\n");
	char *f1;
	char *f2;
	int	n = 6;

	f1 = "abcdefghij";
	f2 = "abcdefgxyz";
	printf("%s\n%s\nDiference : %d\n", f1, f2, ft_strncmp(f1, f2, n));

	printf("\n------ func: ft_memchr ------\n");
	char	f3[] = "Gabriel sou eu";
	char	*ptr2 = ft_memchr(f3, 's', 9);
	if (ptr2 == NULL)
	{
		printf("Caractere nao encontrado\n");
	}
	else
	{
		printf("A letra: %c, foi achada no indice: %ld\n", *ptr2, ptr2 - f3);
		printf("%s\n", ptr2);
	}

	printf("\n------ func: ft_memcmp ------\n");
	char	*f4;
	char	*f5;
	int		n1 = 6;

	f4 = "abcdef";
	f5 = "abcde";
	printf("%i\n", ft_memcmp(f4, f5, n1));

	printf("\n------ func: ft_strnstr ------\n");
	const char	small[] = "Campos Ro";
	const char	big[] = "Gabriel Augusto Campos Rodrigues";
	char	*ptr3;

	ptr3 = ft_strnstr(big, small, 4);
	if (ptr3)
		printf("'%s' encontrado em '%s'\n", small, big);
	else
		printf("'%s' não encontrado em '%s'\n", small, big);

	return (0);
}