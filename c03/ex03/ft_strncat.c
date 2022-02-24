/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:00:47 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/18 17:47:45 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_size;
	int				i;

	i = 0;
	dest_size = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[dest_size] && nb-- != 0)
	{
		dest[i++] = src[dest_size++];
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char src[] = "sokobiso";
	char dest[] = "kisoKiso";
	ft_strncat(dest,src,8);
	return 0;
}