/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 12:48:42 by ssibiya           #+#    #+#             */
/*   Updated: 2017/08/04 12:37:54 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
