/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utlis.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpuscedd <gpuscedd@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:40:49 by gpuscedd          #+#    #+#             */
/*   Updated: 2024/05/20 13:40:10 by gpuscedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(t_vars *vars, char *message)
{
	ft_printf("\n\e[41m\e[1m Error! \e[0m %s\n\n", message);
	free_all(vars);
	exit(1);
}

int	matrix_len(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
		i++;
	return (i);
}

void	display_stacks(t_node *head_a, t_node *head_b)
{
	t_node	*current;
	
	current = NULL;
	ft_printf("\nSTACK A:\n");
	if (head_a != NULL)
	{
		current = head_a;
		while(current)
		{
			ft_printf("[%d] ", current->data);
			current = current->next;
		}
	}
	ft_printf("\n");
	ft_printf("STACK B:\n");
	if (head_b != NULL)
	{
		current = head_b;
		while(current)
		{
			ft_printf("[%d] ", current->data);
			current = current->next;
		}
	}
}
