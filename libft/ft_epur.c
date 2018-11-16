/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_epur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 19:57:59 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/16 20:01:23 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_epur(char *s)
{
	int i;

	i = 0;
	while (s[i] <= 32 && s[i])
		i++;
	while (s[i])
	{
		while ((s[i] != '\t' && s[i] != ' ') && s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
		write(1, &s[i], 1);
		while (s[i] && (s[i] <= ' '))
			i++;
	}
}
