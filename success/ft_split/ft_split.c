/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessica <jessica@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 19:33:29 by jessica           #+#    #+#             */
/*   Updated: 2025/02/06 19:52:12 by jessica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_isspace(int i)
{
	return ((i == ' ') || ( i > 8 && i < 14));
}


char    **ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **split;

	i = 0;
	k = 0;
	if(!(split = (char**)malloc(sizeof(char*) * 256)))
		return (NULL);
	while( ft_isspace(str[i]))
		i++;
	while(str[i])
	{
		j = 0;
		if(!(split[k] = (char*)malloc(sizeof(char) * 4096)))
			return (NULL);
		while(str[i] && !ft_isspace(str[i]))
		{
			split[k][j] = str[i];
			j++;
			i++;
		}
		while(ft_isspace(str[i]))
			i++;
		split[k][j] = '\0';
		k++;
	}
	split[k] = NULL;
	return(split);
}
