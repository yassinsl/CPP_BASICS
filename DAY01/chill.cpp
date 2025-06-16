/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chill.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 08:15:39 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/16 09:03:53 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
namespace my_std{
	char *convert_up(char *str)
	{
		int i = -1;
		while(str[++i])
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] -=32;
		return(str);
	}
	char *convert_lw(char *str);
	namespace new_std{
	char *convert_up(char *str){
		int i = -1;
		while(str[++i] && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -=32;
		return (!str[i]) ? str : NULL;
	}
	}
}
char *my_std::convert_lw(char *str)
{
	int i = -1;
	while(str[++i])
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] +=32;
	return(str);
}
int main(int ac, char **av)
{
	int i = 0;
	if(ac <= 1)
		return(cout << "Just love Nvim :)" << endl, 1);	
	cout << "Upper version :";
	while(av[++i])	
	{
		my_std::convert_up(av[i]);
		cout << " " << av[i];
	}
	cout << endl;
	i = 0;
	cout << "Lower version :";
	while(av[++i])	
	{
		my_std::convert_lw(av[i]);
		cout << " "<< av[i]; 
	}
	cout << endl;
	i = 0;
	cout << "new Upper  version :";
	while(av[++i])	
	{
		if(!my_std::new_std::convert_up(av[i]))
			return(cout << "I'm telling you: just love Nvim :)" << endl, 1);			cout << " "<< av[i]; 
	}
	cout << endl;
}
