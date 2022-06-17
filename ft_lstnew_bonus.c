/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleite-s <rleite-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 23:03:47 by rleite-s          #+#    #+#             */
/*   Updated: 2022/06/17 22:06:17 by rleite-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(1 * sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}

/* int main(void)
{
	t_list *teste = ft_lstnew("Item inserido (essa String)");
	printf("%s \n", (char *)teste->content);
	int *tes = ft_calloc(2, sizeof(int));
	tes[0] = 14;
	tes[1] = 15;
	teste = ft_lstnew(tes);
	printf("%d \n", ((int *)teste->content)[0]);
	teste = ft_lstnew("Nova string");
	printf("%s \n", (char *)teste->content);
	return (0);
} */