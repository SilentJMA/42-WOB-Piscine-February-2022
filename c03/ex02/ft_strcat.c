/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:55:48 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/20 00:04:16 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int dest_size;

	i = 0;
	dest_size = 0;
	while (dest[i])
	{
		dest_size++;
		i++;
	}
	i = 0;
	while (src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
#include <stdio.h>
int main()
{
	char src[20] = "blaaaaaaaah";
	char dest[10] = " bububu";
	printf("%s\n",ft_strcat(src,dest));
}