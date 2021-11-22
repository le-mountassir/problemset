/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lets_get_started.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student-1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 23:30:26 by ahel-mou          #+#    #+#             */
/*   Updated: 2021/11/20 23:30:26 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(){
    char login[16];
    int i =0;
    char key;
    scanf("%s\n", &login);
    scanf("%c", &key);
    while (login[i])
    {
        if(login[i] == key)
        {
            printf("NO");
            return (0);
        }
        i++;
    }
    printf("YES");
}