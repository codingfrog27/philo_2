/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-cloe <mde-cloe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/05 16:27:38 by mde-cloe      #+#    #+#                 */
/*   Updated: 2023/06/05 16:27:38 by mde-cloe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_data		data;

	if (!parsing_args(argc, argv, &data))
		return (printf(C_RED"wrong input buddy"));
	data->philos = philo_init(data);
}
