/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numussan <numussan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:19:37 by numussan          #+#    #+#             */
/*   Updated: 2022/09/22 19:18:26 by numussan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	if (!s1 && !s2)
		return (NULL);
	result = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 2) * sizeof(char));
	if (!result)
		return (NULL);
	while (*s1)
		result[i++] = *s1++;
	result[i++] = ' ';
	while (*s2)
		result[i++] = *s2++;
	result[i] = '\0';
	return (result);
}
