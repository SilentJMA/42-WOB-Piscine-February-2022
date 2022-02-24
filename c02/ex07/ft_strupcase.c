/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:03:03 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/15 20:50:40 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;
	i++;
	}
	return (str);
}

#include <stdio.h>
int main(void)
{
	char a[] = "asjhhgfsjh";
	
	printf("%s \n", ft_strupcase(a));
}