/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:46:13 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/27 12:18:51 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/* int	main(void)
{
	const char *str = "Hello, World!";
	char ch = 'W';
	char *result;
	result = ft_strchr(str, ch);
	if (result)
		printf("Character '%c' found at position: %ld\n", ch, result - str);
	else
		printf("Character '%c' not found in the string.\n", ch);
	return (0);
} */