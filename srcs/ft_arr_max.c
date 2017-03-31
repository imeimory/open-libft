/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 21:27:38 by jaleman           #+#    #+#             */
/*   Updated: 2017/03/30 21:27:39 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the value of the array’s biggest element.
*/

int		ft_arr_max(int *arr, int length)
{
	int		i;
	int		max;

	i = -1;
	max = 0;
	while (++i < length)
		if (max > arr[i])
			max = arr[i];
	return (max);
}
