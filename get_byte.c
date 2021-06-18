/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_byte.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongjule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 14:48:13 by yongjule          #+#    #+#             */
/*   Updated: 2021/06/19 01:03:27 by yongjule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_uchar_byte(va_list ap, t_ull total_len)
{
	unsigned char	*ptr;

	ptr = va_arg(ap, unsigned char *);
	if (!ptr)
		*ptr = (unsigned char)total_len;
	va_end(ap);
}

void	get_ushort_byte(va_list ap, t_ull total_len)
{
	unsigned short	*ptr;

	ptr = va_arg(ap, unsigned short *);
	if (!ptr)
		*ptr = (unsigned short)total_len;
	va_end(ap);
}

void	get_ul_byte(va_list ap, t_ull total_len)
{
		t_ul	*ptr;

	ptr = va_arg(ap, t_ul *);
	if (!ptr)
		*ptr = (t_ul)total_len;
	va_end(ap);
}

void	get_ull_byte(va_list ap, t_ull total_len)
{
	t_ull	*ptr;

	ptr = va_arg(ap, t_ull *);
	if (!ptr)
		*ptr = (t_ul)total_len;
	va_end(ap);
}

void	get_ui_byte(va_list ap, t_ull total_len)
{
	t_ui	*ptr;

	ptr = va_arg(ap, t_ui *);
	if (!ptr)
		*ptr = (t_ui)total_len;
	va_end(ap);
}
