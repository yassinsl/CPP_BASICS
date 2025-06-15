/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_in_namespace.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:58:30 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/15 16:42:14 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

namespace sp_1{
#include "my_header.h"
}
int main(void)
{
	cout << sp_1::ft_strlen("hello world") << endl;
}	
