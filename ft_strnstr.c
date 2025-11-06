/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:24:37 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/27 12:50:08 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/* int	main(void)
int	main(void)
{
	const char	*big = "Hello, this is a simple string.";
	const char	*little = "simple";
	size_t		len = 25;
	char		*result;

	result = ft_strnstr(big, little, len);
	if (result)
		printf("Found substring: %s\n", result);
	else
		printf("Substring not found within the given length.\n");
	return (0);
} */