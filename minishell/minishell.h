/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuhn <kkuhn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:27:53 by kkuhn             #+#    #+#             */
/*   Updated: 2024/08/22 17:28:56 by kkuhn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>

typedef struct mini_t
{
	char	*line;
	char	**envp;
	int		finished;
}	t_mini;

void	init(t_mini *ministruct, char **envp);
void	free_function(t_mini *ministruct);
#endif