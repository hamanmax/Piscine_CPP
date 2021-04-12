#ifndef FARMER_HPP
#define FARMER_HPP

#include "Victim.hpp"
#include <iostream>

class Farmer : virtual public Victim
{
	private:
		Farmer();
	protected:
		/*Arg*/
	public:
		Farmer(std::string name);
		Farmer(Farmer const & copy);
		Farmer & operator=(Farmer const & op);
		virtual ~Farmer();

		std::string get_name()const;
		void set_name(std::string const name);
		void getPolymorphed()const;
};

std::ostream& operator<<(std::ostream & os,const Farmer & op);
#endif