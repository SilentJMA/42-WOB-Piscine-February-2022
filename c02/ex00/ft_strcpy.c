/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:10:54 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/17 20:14:59 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0') // copy string from a source a character array to a destination character array
	{
		dest[i] = src[i];
		i++;
	}
		dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int main(void)
{
	char src[] = "sokobiso";
	char dest[10];
	ft_strcpy(dest, src);
	printf("dest : %s \n", dest);
}