/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:18:01 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/13 16:07:12 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*current;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	current = lst;
	while (current)
	{
		new_node = ft_lstnew(f(current->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		current = current->next;
	}
	return (new_list);
}

/* void	*duplicate_content(void *content)
{
	char	*str = (char *)content;
	size_t	len = strlen(str);
	char	*dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	strcpy(dup, str);
	return (dup);
}*/

/* void	delete_content(void *content)
{
	free(content);
} */
/* int	main(void)
{
	t_list	*original_list = NULL;
	t_list	*mapped_list;
	t_list	*current;

	ft_lstadd_back(&original_list, ft_lstnew("Node 1"));
	ft_lstadd_back(&original_list, ft_lstnew("Node 2"));
	ft_lstadd_back(&original_list, ft_lstnew("Node 3"));

	mapped_list = ft_lstmap(original_list, duplicate_content, delete_content);

	printf("Mapped list contents:\n");
	current = mapped_list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	ft_lstclear(&original_list, free);
	ft_lstclear(&mapped_list, delete_content);
	return (0);
} */