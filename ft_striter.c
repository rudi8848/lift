/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvynogra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:19:19 by gvynogra          #+#    #+#             */
/*   Updated: 2017/11/06 15:23:11 by gvynogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f) (char*))
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			f(&s[i]);
			i++;
		}
	}
}
