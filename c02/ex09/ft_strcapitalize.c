/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabane <mjabane@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:56:21 by mjabane           #+#    #+#             */
/*   Updated: 2022/02/19 10:24:30 by mjabane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		capital;

	i = 0;
	capital = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (capital && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!capital && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			capital = 0;
		}
		else
			capital = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>
int main(void)
{
	char a[] = "LOLOLaa";
	//char b[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("%s \n", ft_strcapitalize(a));
}