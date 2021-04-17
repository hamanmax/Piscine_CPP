
#include <iostream>
#include <string>
#include "iter.hpp"

class Awesome
{
	public:
	Awesome( void ): _n(42){return;}
	int get( void ) const {return this->_n;}
	private:
	int _n;
};

std::ostream & operator<<(std::ostream & o,Awesome const & rhs){ o <<rhs.get();return(o);}
int main()
{
	{
		int i[5] = {15,16,17,18,19};
		double d[] = {3.14,1.47,39.8,25.4};
		std::string str[] = {"Bonjour les amis","Salut les amis"};

		std::cout << "---------\tTEST STR\t---------\n";
		::iter(str,2,push);
		std::cout << "---------\tTEST INT\t---------\n";
		::iter(i,5,push);
		::iter(i,5,increment);
		::iter(i,5,push);
		std::cout << "---------\tTEST DOUBLE\t---------\n";
		::iter(d,4,push);
		::iter(d,4,increment);
		::iter(d,4,push);
	}
}