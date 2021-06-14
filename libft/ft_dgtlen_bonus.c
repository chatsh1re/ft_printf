/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dgtlen_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongjule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:51:42 by yongjule          #+#    #+#             */
/*   Updated: 2021/06/14 13:51:56 by yongjule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_dgtlen(int nbr, unsigned int base)
{
	int cnt;

	cnt = 0;
	if (base < 2)
		return (0);
	while (nbr)
	{
		nbr /= base;
		cnt++;
	}
	return (cnt);
}