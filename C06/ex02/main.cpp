/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:08 by cmarcu            #+#    #+#             */
/*   Updated: 2023/07/16 23:24:28 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	std::srand(std::time(nullptr)); // use current time as seed for random generator
    int random_variable = std::rand() % 3;
	switch (random_variable)
	{
		case 0:
			std::cout << "Class A generated" << std::endl;
			return new A;
			break;
		case 1:
			std::cout << "Class B generated" << std::endl;
			return new B;
			break;
		case 2:
			std::cout << "Class C generated" << std::endl;
			return new C;
			break;
		default:
			std::cout << "Coudn't create any class" << std::endl;
			return NULL;
			break;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "The real type of p is A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "The real type of p is B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "The real type of p is C" << std::endl;
	else
		std::cout << "Couldn't determine the type of p" << std::endl;
}

void identify(Base& p)
{
	try 
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "The real type of p is A" << std::endl;
		(void)a;
	}
	catch (std::bad_cast)
	{
		try
		{
			B& b = dynamic_cast<B&>(p);
			std::cout << "The real type of p is B" << std::endl;
			(void)b;
		}
		catch (std::bad_cast)
		{
			try
			{
				C& c = dynamic_cast<C&>(p);
				std::cout << "The real type of p is C" << std::endl;
				(void)c;
			}
			catch (std::bad_cast)
			{
				std::cout << "Couldn't determine the type of p" << std::endl;
			}
		}
	}
}

int main( void )
{

	Base *base;
	base = generate();
	identify(base);
	identify(*base);
	
	return 0;
}
