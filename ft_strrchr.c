/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:52:11 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/27 12:20:04 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/* int	main(void)
{
	const char *str = "Hello, World!";
	char ch = 'o';
	char *result;
	result = ft_strrchr(str, ch);
	if (result)
		printf("Last occurrence of character '%c' found at position: %ld\n", ch,
			result - str);
	else
		printf("Character '%c' not found in the string.\n", ch);
	return (0);
} */