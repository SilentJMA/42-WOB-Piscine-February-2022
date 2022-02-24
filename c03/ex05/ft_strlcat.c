/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:07:06 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/17 18:09:15 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;
	unsigned int	dest_size;

	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	i = 0;
	while (src[i] && dest_size + i < (size - 1))
	{
		dest[i + dest_size] = src[i];
		i++;
	}
	if (i < size)
		dest[dest_size + i] = '\0';
	if (dest_size > size)
		return (src_size + size);
	return (dest_size + src_size);
}

#include <stdio.h>
int main()
{
	unsigned int s = 26;
	char *src = "Kiso";
	char s2[20] = "Sokobiso ";
	printf("return = %u | s2 = %s\n", ft_strlcat(s2, src, s), s2);
	return 0;
}