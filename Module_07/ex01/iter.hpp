#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename U>
void iter(T * Array, U Lenght, void(*funct)(T &))
{
	for(int i = 0;i < Lenght;i++)
	{
		funct(Array[i]);
	}
}

template< typename T >
void print( T & x )
{
	std::cout << x << std::endl;
	return;
}
template <typename T>
void push(T & Array)
{
	std::cout << Array << "\n";
};
#endif