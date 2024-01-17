#pragma once

//perror exit için
#include <cstdio>
#include <cstdlib>

# include <iostream>

//Abstract class (soyut sınıf)
// nesne oluşturulamayan ve genellikle diğer sınıflar 
// için temel bir tasarım sağlayan sınıflardır
class AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal();
		virtual ~AAnimal() = 0;
		AAnimal(const AAnimal & ref);
		AAnimal & operator=(AAnimal const & rhs);
		virtual std::string getType( void ) const;
		virtual void makeSound() const = 0;
};