/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:53:21 by ineimatu          #+#    #+#             */
/*   Updated: 2025/01/07 14:28:23 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cstring>
#include <cstdlib>

int main(int argc, char **argv)
{
	int i;
	int j;
	int a;
	char str[1000];
	
	i = 1;
	a = 0;
	
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
		return 0;
	}
	else
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					str[a] = argv[i][j] - 32;
				else
					str[a] = argv[i][j];
				j++;
				a++;
			}
			i++;
			if (argv[i])
			{
				str[a] = ' ';
				a++;
			}
		}
		str[a] = '\0';

		std::cout << str << std::endl;
		return(0);
	}
}
