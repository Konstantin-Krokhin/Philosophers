/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokrokhi <kokrokhi@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:44:47 by kokrokhi          #+#    #+#             */
/*   Updated: 2022/12/28 14:44:47 by kokrokhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int main(int argc, char **argv)
{
    if (argc != 5 && argc != 6)
        printf("Error! Wrong number of parameters given to the program!");
    return (0);
}