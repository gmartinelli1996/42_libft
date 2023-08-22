/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:00:36 by guferrei          #+#    #+#             */
/*   Updated: 2023/08/21 21:02:11 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

char	*ft_strdup(const char *s)
{
	size_t	n;
	char	*ptr;
	size_t	c;

	c = 0;
	n = ft_strlen((char *)s);
	ptr = (char *)malloc((n + 1) * sizeof(char));
	if (!ptr || !s)
		return (NULL);
	while (c < n)
	{
		*(ptr + c) = *(s + c);
		c++;
	}
	*(ptr + c) = '\0';
	return (ptr);
}
