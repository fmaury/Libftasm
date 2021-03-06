/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isdupper_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:04:16 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 18:33:22 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"

void     islower_launcher(t_frame *frame)
{

	puts("ft_islower :");
	load_tests(frame, " - Lowercase", &easy_islower_test);
	load_tests(frame, " - Uppercase", &medium_islower_test);
	load_tests(frame, " - All", &hard_islower_test);
	launch_tests(frame);
	puts("");
}