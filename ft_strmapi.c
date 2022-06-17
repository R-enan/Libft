/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleite-s <rleite-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:41:12 by rleite-s          #+#    #+#             */
/*   Updated: 2022/06/14 23:25:35 by rleite-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*mapi;
	unsigned int	index;
	size_t			s_len;

	s_len = ft_strlen(s);
	mapi = (char *) malloc((s_len + 1) * sizeof(char));
	if (mapi == NULL)
		return (NULL);
	index = 0;
	while (s_len--)
	{
		mapi[index] = f(index, s[index]);
		index++;
	}
	mapi[index] = 0;
	return (mapi);
}
