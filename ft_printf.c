/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <getrembl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 17:48:43 by getrembl          #+#    #+#             */
/*   Updated: 2014/12/18 19:23:29 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *format, ...)
{
	ft_modulo_x()
}

/*
** Algorithme de transformation decimaux en hexadeciamux
** Utilisable pour %x et %X.
*/

char		*ft_modulo_x(int dec)
{
	char	*hexadec[100];
	char	*ret;
	int		quotient;
	int		tmp;
	int		i;

	quotient = dec;
	i = 0;
	while (quotient)
	{
		tmp = quotient % 16;
		(tmp < 10) ? (tmp = 48 + tmp) : (tmp = 55 + tmp);
		hexadec[i++] = tmp;
		quotient = quotient % 16;
	}
	hexadec[i] = '\0';
	if(!(ret = (char *)malloc(sizeof(char) * ft_strlen(hexadec))))
		return (NULL);
	i = 0;
	tmp = ft_strlen(hex);
	while (ft_strlen(hexadec) > 0)
		ret [i++] = hex[tmp--];
	return (ret);
}
