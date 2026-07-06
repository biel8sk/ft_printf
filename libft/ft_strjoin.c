/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 21:47:26 by gpires-c          #+#    #+#             */
/*   Updated: 2026/06/08 18:28:59 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len_1;
	size_t	len_2;

	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	new_str = (char *)malloc((len_1 + len_2 + 1));
	if (!new_str)
		return (NULL);
	new_str[0] = '\0';
	ft_strlcpy(new_str, s1, len_1 + len_2 + 1);
	ft_strlcat(new_str, s2, len_1 + len_2 + 1);
	return (new_str);
}
