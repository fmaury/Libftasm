/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_easy_toupper_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:04:04 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:10:52 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"

int     medium_toupper_test(void)
{	
	if (ft_toupper('1') == toupper('1'))
		return (1);
    return (0);
}