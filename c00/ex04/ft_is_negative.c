/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:48:00 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/07 21:29:09 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	stat;

	if (n >= 0)
	{
		stat = 'P';
	}
	else
	{
		stat = 'N';
	}
	write(1, &stat, 1);
}
