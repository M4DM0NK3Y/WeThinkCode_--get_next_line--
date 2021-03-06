/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:23:40 by cterblan          #+#    #+#             */
/*   Updated: 2018/05/28 14:44:10 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int n)
{
	if (n)
	{
		if (n == ' ' || n == '\n' || n == '\t' || n == '\v' || n == '\f' ||
			n == '\r')
			return (1);
	}
	return (0);
}
