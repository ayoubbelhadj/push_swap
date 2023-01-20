/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_erreur.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:31:14 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/20 16:36:31 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	get_erreur(char *msg)
{
	int	i;

	i = 0;
	while (msg[i])
	{
		write (1, &msg[i], 1);
		i++;
	}
	exit(EXIT_FAILURE);
}
