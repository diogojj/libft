/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:47:08 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/27 11:50:42 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/* #include <stdio.h>
int	main(void)
{
	size_t	nmemb = 5;
	size_t	size = sizeof(int);
	int		*arr;
	size_t	i;

	arr = (int *)ft_calloc(nmemb, size);
	if (!arr)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Allocated array elements after ft_calloc:\n");
	for (i = 0; i < nmemb; i++)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
	}
	free(arr);
	return (0);
} */