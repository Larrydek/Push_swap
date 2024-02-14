/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-clee <jde-clee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 04:26:31 by jde-clee          #+#    #+#             */
/*   Updated: 2024/02/14 00:36:54 by jde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*s_final;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s_final = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!s_final)
		return (NULL);
	ft_strlcpy(s_final, s1, len_s1 + len_s2 + 1);
	ft_strlcat(s_final, (char *)s2, len_s1 + len_s2 + 1);
	return (s_final);
}
