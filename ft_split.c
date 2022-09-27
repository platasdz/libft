/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: platas <platas@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:38:31 by platas            #+#    #+#             */
/*   Updated: 2022/09/27 11:34:56 by platas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *str, char c)
{
	size_t	res;
	size_t	i;

	i = 0;
	res = 0;
	if (str[i] != c && str[i] != 0)
		res++;
	while (str[i] != 0)
	{
		if (str[i] == c)
		{
			if (str[i + 1] == c || str[i + 1] == 0)
				i++;
			else
			{
				i++;
				res++;
			}
		}
		else
			i++;
	}
	return (res);
}

static size_t	count_let(char const *str, size_t pos, char c)
{
	size_t	res;

	res = 0;
	while (str[pos] != c && str[pos] != 0)
	{
		pos++;
		res++;
	}
	return (res);
}

static char	*fill(char const *s, char *to_fill, size_t pos, char c)
{
	size_t	i;

	i = 0;
	to_fill = (char *)malloc(sizeof(char) * (count_let(s, pos, c) + 1));
	if (to_fill)
	{
		while (s[pos] != c && s[pos] != 0)
		{
			to_fill[i] = s[pos];
			pos++;
			i++;
		}
		to_fill[i] = 0;
		return (to_fill);
	}
	else
		return (NULL);
}

static void	free_matrix(size_t j, char **matrix)
{
	while (j-- >= 0)
	{
		free(matrix[j]);
		matrix[j] = NULL;
	}
	free(matrix);
	matrix = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	matrix = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!matrix)
		return (NULL);
	while (j < count_words(s, c))
	{
		if (s[i] == c)
			i++;
		else
		{
			matrix[j] = fill(s, matrix[j], i, c);
			if (matrix[j] == NULL)
				free_matrix(j, matrix);
			i = i + ft_strlen(matrix[j++]);
		}
	}
	matrix[count_words(s, c)] = NULL;
	return (matrix);
}
/*
int	main()
{
	//char	*last = "potent ially long string \0";
	char	**new;
	printf("The num words is: %lu\n", count_words("", ' '));
	new = ft_split("", ' ');
	// while(new)
	// {
	// 	puts(*new);
	// 	new++;
	// }
}*/
