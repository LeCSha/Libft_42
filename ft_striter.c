/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaille <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 17:07:33 by abaille           #+#    #+#             */
/*   Updated: 2017/11/22 17:07:36 by abaille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	size_t i;

	i = 0;
	if (s && f)
	{
		while (i < ft_strlen(s) && s[i])
		{
			f(&s[i]);
			i++;
		}
	}
}