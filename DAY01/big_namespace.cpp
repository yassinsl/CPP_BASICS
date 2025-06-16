/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_namespace.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 09:15:11 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/16 09:21:54 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;
namespace  biiiiiiiiiiiiiiiiiiiiiiiiiiiiiiig_naaaaaaaaaame
{	
	int ft_strlen(string str)
	{
		int i = -1;
		while(str[++i]);
		return(i);
	}
}
namespace sh = biiiiiiiiiiiiiiiiiiiiiiiiiiiiiiig_naaaaaaaaaame;
int main(void)
{
	cout << "lenght value " <<sh::ft_strlen("Yassinlahssini")<< endl;
}
