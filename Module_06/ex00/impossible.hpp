#ifndef IMPOSSIBLE_HPP
#define IMPOSSIBLE_HPP
#include <exception>

class CharIsImpossibleExce: virtual public std::exception{
	public:
		virtual const char * what()const throw(){return("char\t: impossible.\n");}};
class CharIsNotDisplayableExce: virtual public std::exception{
	public:
		virtual const char * what()const throw(){return("char\t: non displayable.\n");}};
class IntIsImpossibleExce: virtual public std::exception{
	public:
		virtual const char * what()const throw(){return("int\t: impossible.\n");}};
#endif