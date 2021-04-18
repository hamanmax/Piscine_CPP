#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include<stack>

class mutantstack : virtual public std::stack<int>
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		mutantstack();
		mutantstack(mutantstack const & copy);
		mutantstack & operator=(mutantstack const & op);
		~mutantstack();
};

mutantstack::mutantstack(){}

mutantstack::mutantstack(mutantstack const & copy){*this = copy;}

mutantstack & mutantstack::operator=(mutantstack const & op){
}

mutantstack::~mutantstack(){}

#endif