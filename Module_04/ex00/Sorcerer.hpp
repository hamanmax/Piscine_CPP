#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include "Victim.hpp"

class Sorcerer 
{
	private:
		std::string _name;
		std::string _title;
		Sorcerer();
	protected:
		/*Arg*/
	public:
		Sorcerer(const Sorcerer & copy);
		Sorcerer & operator=(const Sorcerer & op);
		~Sorcerer();

		Sorcerer(std::string name,std :: string title);

		void introduce();
		void polymorph(Victim const &);

		std::string get_name()const;
		void set_name(std::string const name);
		std::string get_title()const;
		void set_title(std::string const title);
};

std::ostream& operator<<(std::ostream & os, const Sorcerer  & dt);

std::ostream& operator<<(std::ostream & os,const Sorcerer & dt){
	std::string op = "I am " + dt.get_name() + ", " + dt.get_title() + ", and I like ponies!";
	os << op << std::endl;
	return os;
}

std::string Sorcerer::get_name()const {
	return(this->_name);
}
void Sorcerer::set_name(std::string const name){
	this->_name = name;
}

std::string Sorcerer::get_title()const {
	return(this->_title);
}

void Sorcerer::set_title(std::string const title) {
	this->_title = title;
}

Sorcerer::Sorcerer(std::string name,std :: string title):_name(name),_title(title){
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & copy){*this = copy;}

Sorcerer & Sorcerer::operator=(const Sorcerer & op){
	if (this != &op)
	{
		this->_name = op._name;
		this->_title = op._name;
	}
	return *this;
}

Sorcerer::~Sorcerer(){
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::introduce(){
		std::cout<<"I am " << this->_name << ", " << this->_title << ", and I like ponies!" << std::endl;
}

void Sorcerer::polymorph(Victim const &victim){
	victim.getPolymorphed();
}

#endif