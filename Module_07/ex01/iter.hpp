#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename U>
void iter(T * Array, U Lenght, void(*funct)(T &))
{
	for(U i = 0;i < Lenght;i++)
	{
		funct(Array[i]);
	}
}
template <typename T, typename U>
void	iter(T const *Array, U Lenght, void (*funct)(T const &))
{
	for(U i = 0;i < Lenght;i++)
	{
		funct(Array[i]);
	}
}
template <typename T>
void push(T & Array)
{
	std::cout << Array << "\n";
};
template <typename T>
void increment(T & Array)
{
	Array += 1;
}
template<typename T>
void print(T const & x){std::cout << x << std::endl;return;}
#endif