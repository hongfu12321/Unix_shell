/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tokens_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <mjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:23:43 by mjacques          #+#    #+#             */
/*   Updated: 2018/10/27 16:30:40 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

int			ft_check_operator(char *str)
{
	int i;

	i = -1;
	while (++i < NBRTOKENS)
		if (ft_strcmp(str, g_operator[i].value) == 0)
			return (i);
	return (-1);
}

char		*ft_tokens_val(t_ast *tokens)
{
	if (ft_check_operator(tokens->val) == -1)
		return (tokens->val);
	return (ft_tokens_val(tokens->l_child));
}
