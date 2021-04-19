#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include<stack>
#include <deque>

template< class T,  class Container = std::deque <T> >

class MutantStack : virtual public std::stack<T,Container>
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		MutantStack(void): std::stack<T,Container>() {}
		virtual ~MutantStack(void) {}

		MutantStack(std::stack<T,Container> const &obj): std::stack<T,Container>(obj) {}
		MutantStack(MutantStack const &obj): std::stack<T,Container>(obj) {}

		MutantStack &operator=(const MutantStack &op)
		{
			if (this == &op)
				return (*this);
			std::stack<T,Container>::operator=(op);
			return (*this);
		};
		typedef typename Container::iterator iterator;
		iterator begin(){
			return this->c.begin();
		};
		iterator end(){
			return this->c.end ();}
};
#endif