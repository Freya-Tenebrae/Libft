/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <cmaginot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 02:15:56 by cmaginot          #+#    #+#             */
/*   Updated: 2021/04/20 22:45:59 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *lst;

	if (!(lst = malloc(sizeof(t_list))))
		return (0);
	lst->content = content;
	lst->next = 0;
	return (lst);
}
