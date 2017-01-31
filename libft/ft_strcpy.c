/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:41:11 by mbarbari          #+#    #+#             */
/*   Updated: 2014/11/04 12:44:57 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	char *s2;

	s2 = dst;
	while (*src != '\0')
		*dst++ = *src++;
	*dst = '\0';
	return (s2);
}