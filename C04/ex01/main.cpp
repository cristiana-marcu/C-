/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:08 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/21 20:01:04 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main( void ) {

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Cat *missy = new Cat();
	missy->getBrain()->setIdea(0, "Basic meow");
	missy->getBrain()->setIdea(1, "Power meow");
	missy->getBrain()->setIdea(2, "HUSHHHHHHH");

	std::cout << "Missy idea 0: " << missy->getBrain()->getIdea(0) << std::endl;
	std::cout << "Missy idea 1: " << missy->getBrain()->getIdea(1) << std::endl;
	std::cout << "Missy idea 2: " << missy->getBrain()->getIdea(2) << std::endl;
	std::cout << "Missy idea non existing: " << missy->getBrain()->getIdea(3) << std::endl;

	Cat *pissy = new Cat(*missy);
	pissy->getBrain()->setIdea(0, "ROAR I TURNED INTO A LION");

	std::cout << "Pissy idea 0: " << pissy->getBrain()->getIdea(0) << std::endl;
	std::cout << "Pissy idea 1: " << pissy->getBrain()->getIdea(1) << std::endl;
	std::cout << "Pissy idea 2: " << pissy->getBrain()->getIdea(2) << std::endl;
	std::cout << "Pissy idea non existing: " << pissy->getBrain()->getIdea(3) << std::endl;


	Dog *bossy = new Dog();
	bossy->getBrain()->setIdea(0, "WOOF");
	bossy->getBrain()->setIdea(1, "WOOF WOOF");
	bossy->getBrain()->setIdea(2, "I'M HUNGRY");

	std::cout << "Bossy idea 0: " << bossy->getBrain()->getIdea(0) << std::endl;
	std::cout << "Bossy idea 1: " << bossy->getBrain()->getIdea(1) << std::endl;
	std::cout << "Bossy idea 2: " << bossy->getBrain()->getIdea(2) << std::endl;
	std::cout << "Bossy idea non existing: " << bossy->getBrain()->getIdea(3) << std::endl;

	Dog *cossy = new Dog(*bossy);
	cossy->getBrain()->setIdea(0, "WTF IS THAT CAT DOING");

	std::cout << "Cossy idea 0: " << cossy->getBrain()->getIdea(0) << std::endl;
	std::cout << "Cossy idea 1: " << cossy->getBrain()->getIdea(1) << std::endl;
	std::cout << "Cossy idea 2: " << cossy->getBrain()->getIdea(2) << std::endl;
	std::cout << "Cossy idea non existing: " << cossy->getBrain()->getIdea(3) << std::endl;

	delete j;
	delete i;

	Animal *animals[10];

	for(int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for(int i = 0; i < 10; i++)
		delete animals[i];

	return 0;
}
