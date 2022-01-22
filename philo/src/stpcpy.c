/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stpcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo Suardi <lsuardi@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:48:23 by Leo Suardi        #+#    #+#             */
/*   Updated: 2022/01/13 14:49:36 by Leo Suardi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_stpcpy(char *dst, const char *src)
{
	while (*src)
		*dst++ = *src++;
	*dst = 0;
	return (dst);
}