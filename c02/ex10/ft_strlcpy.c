/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:16:44 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/18 09:25:05 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				src_size;

	src_size = 0;
	while (src[src_size])
	{
		src_size++;
	}
	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_size);
}

#include <stdio.h>
int	main ()
{
	char src[] = "sokobiso";
	char dest[8];
	unsigned int size = ft_strlcpy(dest,src, 8);
	printf("size : %d \n",size);
}