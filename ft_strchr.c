/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:15:29 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/20 19:49:05 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char *s;

	s = (char *)str;
	while (*s != '\0')
	{
		if (*s == ch)
			return (s);
		s++;
	}
	if (*s == ch)
		return (s);
	return (NULL);
}
