#include "span.hpp"
#include <ctime>
#include <cstdlib>

int randomNumber()
{
	return(rand());
}

struct c_unique {
  int current;
  c_unique() {current=0;}
  int operator()() {return ++current;}
} UniqueNumber;

int main()
{
	srand(time(NULL));
	{
		std::cout << "|Test Erreur Span taille 0|\n";
		Span sp = Span(1);
		try
		{
			sp.addNumber(5);
			sp.shortestSpan();
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	{
		std::cout << "|Test Erreur Span full|\n";
		Span sp = Span(1);
		try
		{
			sp.addNumber(5);
			sp.addNumber(12);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	{
		std::cout << "|Test avec des iterator|\n";
		Span sp = Span(5);
		std::vector<int> inttab;

		inttab.push_back(5);
		inttab.push_back(3);
		inttab.push_back(17);
		inttab.push_back(9);
		inttab.push_back(11);
		sp.addNumber(inttab.begin(),inttab.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "|Test sans iterator|\n";
		Span sp = Span(5);
		sp.addNumber(17);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(11);
		sp.addNumber(9);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "|Test 500 random|\n";
		std::vector<int> gen(1000);
		Span dimilltipla(1000);
		std::generate_n(gen.begin(),1000,randomNumber);
		dimilltipla.addNumber(gen.begin(),gen.end());
		std::cout << dimilltipla.shortestSpan() << std::endl;
		std::cout << dimilltipla.longestSpan() << std::endl;
	}
	{
		std::cout << "|Test 1 000 random|\n";
		std::vector<int> gen(1000);
		Span dimilltipla(1000);
		std::generate_n(gen.begin(),1000,randomNumber);
		dimilltipla.addNumber(gen.begin(),gen.end());
		std::cout << dimilltipla.shortestSpan() << std::endl;
		std::cout << dimilltipla.longestSpan() << std::endl;
	}
	{
		std::cout << "|Test 10 000 random|\n";
		std::vector<int> gen(10000);
		Span dimilltipla(10000);
		std::generate_n(gen.begin(),10000,randomNumber);
		dimilltipla.addNumber(gen.begin(),gen.end());
		std::cout << dimilltipla.shortestSpan() << std::endl;
		std::cout << dimilltipla.longestSpan() << std::endl;
	}
	{
		std::cout << "|Test 10 000 nombre qui se suit|\n";
		std::vector<int> gen(10000);
		Span dimilltipla(10000);
		std::generate_n(gen.begin(),10000,UniqueNumber);
		std::cout << gen[0] << "\n";
		std::cout << gen[9999] << "\n";
		dimilltipla.addNumber(gen.begin(),gen.end());
		std::cout << dimilltipla.shortestSpan() << std::endl;
		std::cout << dimilltipla.longestSpan() << std::endl;
	}
	{
		std::cout << "|Test 50 000 random|\n";
		std::vector<int> gen(50000);
		Span dimilltipla(50000);
		std::generate_n(gen.begin(),50000,randomNumber);
		dimilltipla.addNumber(gen.begin(),gen.end());
		std::cout << dimilltipla.shortestSpan() << std::endl;
		std::cout << dimilltipla.longestSpan() << std::endl;
	}
	{
		std::cout << "|Test 500 000 random|\n";
		std::vector<int> gen(500000);
		Span dimilltipla(500000);
		std::generate_n(gen.begin(),500000,randomNumber);
		dimilltipla.addNumber(gen.begin(),gen.end());
		std::cout << dimilltipla.shortestSpan() << std::endl;
		std::cout << dimilltipla.longestSpan() << std::endl;
	}
}
