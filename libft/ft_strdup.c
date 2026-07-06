/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpires-c <gpires-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 20:40:30 by gpires-c          #+#    #+#             */
/*   Updated: 2026/06/05 21:54:51 by gpires-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	unsigned int	len;
	char			*new;

	len = ft_strlen(str);
	new = (char *) malloc(len + 1 * sizeof(char));
	ft_strlcpy(new, str, len + 1);
	return (new);
}
