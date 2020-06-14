/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seukim <seukim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 22:11:53 by seukim            #+#    #+#             */
/*   Updated: 2020/06/14 22:11:53 by seukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main()
{
	int i;
	char *p1;

	p1 = "ABCD";
	i = 0;

	printf("-------------\n");
	printf("strlen test\n");
	printf("strlen=%d\n",strlen(p1));
	printf("ft_strlen=%d\n",ft_strlen(p1));
	printf("---------------\n");
	return 0;
}
