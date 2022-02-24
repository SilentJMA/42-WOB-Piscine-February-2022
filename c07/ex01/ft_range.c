/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:43:30 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/23 21:45:30 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int *ft_range(int min, int max)
{
	int	*tmp;
	int	i;

	i = 0;
	tmp = malloc(sizeof(int *) * (max - min));
	if (max <= min || tmp == NULL)
	{
		tmp = NULL;
		return (tmp);
	}
	while (min < max)
		tmp[i++] = min++;
	return (tmp);
}
