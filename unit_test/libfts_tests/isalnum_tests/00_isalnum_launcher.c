/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isalnum_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:04:16 by fmaury            #+#    #+#             */
/*   Updated: 2019/05/09 17:57:05 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libfts_tests.h"

void     isalnum_launcher(t_frame *frame)
{
	puts("FT_ISALNUM :");
	load_tests(frame, " - Number", &num_test);
	load_tests(frame, " - Char", &char_test);
	load_tests(frame, " - Hard", &hardnum_test);
	launch_tests(frame);
	puts("");
}