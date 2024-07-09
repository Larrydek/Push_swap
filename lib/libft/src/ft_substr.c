/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:05:53 by jde-clee          #+#    #+#             */
/*   Updated: 2024/07/09 21:34:52 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*aux;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (0);
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	if (!len)
		return (NULL);
	aux = (char *)malloc(len + 1 * sizeof(char));
	if (!aux)
		return (NULL);
	while (s[start] != 0 && i < len)
		aux[i++] = s[start++];
	aux[i] = 0;
	return (aux);
}

// int main()
// {
// 	char const *s;
// 	unsigned int start;
// 	size_t len;

// 	s = "lorem ipsum dolor sit amet";
// 	start = 0;
// 	len = 10;

// 	printf("%s", ft_substr(s, start, len));
// 	return (0);
// }