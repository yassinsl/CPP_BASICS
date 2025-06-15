/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 09:20:58 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/15 09:36:49 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

namespace my_std{
	int global = 33;
	int my_strlen(string str)
	{
	    	int i = -1;
		while(str[++i]);
	  	return(i);
	}
}
int main(void)
{
	cout << my_std::global << endl;
	cout <<	my_std::my_strlen("Hello, World") << endl; 
	return (0);
}
