/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrock <bbrock@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 14:56:38 by bbrock            #+#    #+#             */
/*   Updated: 2021/01/26 18:19:31 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/t_shell.h"

int	ft_env(t_builtin *builtin, char **args)
{
	t_list *item;

	item = builtin->shell->env->list;
	(void)args;
	while (item)
	{
		if (ft_strchr(item->content, '='))
			ft_putendl_fd(item->content, 1);
		item = item->next;
	}
	return (0);
}
