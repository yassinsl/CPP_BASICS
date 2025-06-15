/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 09:20:58 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/15 12:28:46 by ylahssin         ###   ########.fr       */
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
	int is_check(string str); // Here Declaration;
}
int my_std::is_check(string name)
{
	int i = -1;

	while(name[++i] && ((name[i] >= 'a' && name[i] <= 'z') || name[i] == ' '));
	return (!name[i]) ? 1 : 0;
}
int main(void)
{
	cout << my_std::global << endl;
	cout <<	my_std::my_strlen("Hello, World") << endl; 
	cout << "Here is check for this section: " <<  my_std::is_check("samthing in the way" ) << endl;
	return (0);
}
