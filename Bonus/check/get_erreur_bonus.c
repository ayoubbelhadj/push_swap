/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_erreur_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:31:14 by abelhadj          #+#    #+#             */
/*   Updated: 2023/01/26 15:57:11 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker_bonus.h"

void	get_erreur_bonus(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
