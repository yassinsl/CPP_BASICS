/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:31:57 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/15 14:49:53 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
//compiler choise if use inline or not;
inline int add(int a, int b)
{
	int c = a + b;
	return(c);
}
int main(){
	int num = add(4, 6);
	cout << num;
}
