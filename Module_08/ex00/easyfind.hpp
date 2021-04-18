
#include <algorithm>
#include <iostream>
#include <exception>

class IntNotFoundException:public std::exception
{
	public:
		const char *what() const throw(){
			return("Int not found in array\n");
		}
};

template<typename T>

void easyfind(T container, int tofind)
{
	typename T::iterator i = find(container.begin(),container.end(),tofind);
	if (i != container.end())
		std::cout << "Elements found in " << *i << "\n";
	else
		throw IntNotFoundException();
}