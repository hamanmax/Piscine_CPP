#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <exception>
#include <algorithm>
#include <iostream>
#include <climits>

class Span 
{
	private:
		unsigned int	_size;
		std::vector<int> _tab;
		Span();
	protected:
		/*Arg*/
	public:
		Span(unsigned int N);
		Span(Span const & copy);
		Span & operator=(Span const & op);
		~Span();

		void addNumber(int nbr);
		void addNumber(std::vector<int>::iterator first,std::vector<int>::iterator last);
		int shortestSpan();
		int longestSpan();
		class SizeToLowException: public std::exception
		{
			public:
				const char *what()const throw(){return("Span size is to low need at least 2");}
		};
		class SpanIsFull: public std::exception
		{
			public:
				const char *what()const throw(){return("Span is full");}
		};
};

Span::Span(unsigned int N):_size(N){

}

Span::Span(Span const & copy):_size(copy._size),_tab(copy._tab){*this = copy;}

Span & Span::operator=(Span const & op){
	this->_size = op._size;
	this->_tab = op._tab;
	return(*this);
}

Span::~Span(){}

void Span::addNumber(int nbr)
{
	if (this->_size > this->_tab.size())
	{
		this->_tab.push_back(nbr);
	}
	else
		throw SpanIsFull();
}
void Span::addNumber(std::vector<int>::iterator first,std::vector<int>::iterator last)
{
	for (std::vector<int>::iterator i = first;i < last;i++)
	{
		if (this->_size > this->_tab.size())
		{
			this->_tab.push_back(*i);
		}
		else
			throw SpanIsFull();
	}
}

int Span::shortestSpan(){
	std::vector<int> cptab(this->_tab);
	if (this->_tab.size() == 0 ||this->_tab.size() == 1)
	{
		throw SizeToLowException();
	}
	int diff = INT_MAX;
	std::sort(cptab.begin(),cptab.end());
	for (std::vector<int>::iterator i = cptab.begin() + 1;i < cptab.end();i++)
		diff = std::min((*i - *(i - 1)),diff);
	return(diff);
}

int Span::longestSpan(){
	if (this->_tab.size() == 0 ||this->_tab.size() == 1)
	{
		throw;
	}
	std::vector<int>::iterator max;
	std::vector<int>::iterator min;
	max = std::max_element(this->_tab.begin(),this->_tab.end());
	min = std::min_element(this->_tab.begin(),this->_tab.end());
	return(*max - *min);
}
#endif