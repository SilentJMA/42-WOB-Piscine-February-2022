/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:52:02 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/15 20:54:59 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
	i++;
	}
	return (str);
}

#include <stdio.h>
int main(void)
{
	char a[] = "ALDKSHJGFDSKJH";
	
	printf("%s \n", ft_strlowcase(a));
}