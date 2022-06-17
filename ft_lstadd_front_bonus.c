/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleite-s <rleite-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 00:21:11 by rleite-s          #+#    #+#             */
/*   Updated: 2022/06/17 21:58:11 by rleite-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/* int main(void)
{
	t_list *novo = ft_lstnew("Primeira mensagem");
	// *novo = teste;
	printf("1 - %s \n", (char *)novo->content);
	ft_lstadd_front(&novo, ft_lstnew("Segunda mensagem"));
	printf("2 - %s \n", (char *)novo->content);
	ft_lstadd_front(&novo, ft_lstnew("Terceira"));
	t_list *teste = novo;
	printf("3 - %s \n", (char *)novo->content);
	//teste++;
	printf("4 - %s \n", (char *)teste->next->content);
	printf("5 - %s \n", (char *)++novo->next->next->content); // Aqui eu avanço o ponteiro da string.
	printf("6 - %s \n", (char *)++teste->next->next->content); // Avanço de novo o ponteiro da mesma string
	printf("7 - %s \n", (char *)novo->next->next->content - 2); // o legal é que ele mantém o conteúdo (Afinal, a memória foi mallocada)
	return (0);
}  */