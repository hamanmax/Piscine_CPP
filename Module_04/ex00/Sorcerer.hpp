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
		void polymorph(Victim const &) const;

		std::string get_name()const;
		void set_name(std::string const name);
		std::string get_title()const;
		void set_title(std::string const title);
};

std::ostream& operator<<(std::ostream & os, const Sorcerer  & dt);

#endif