/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isaspace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvynogra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:42:53 by gvynogra          #+#    #+#             */
/*   Updated: 2017/11/14 15:44:24 by gvynogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' ||
		c == '\f' || c == '\v' || c == '\r')
		return (1);
	return (0);
}