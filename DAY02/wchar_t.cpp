/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wchar_t.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:47:42 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/18 13:47:27 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cwchar>
#include <locale>
using namespace std;

int main(void)
{
 	setlocale(LC_ALL, "");
	wchar_t wchar = L'あ';
	wcout <<  wchar << endl; 
}
