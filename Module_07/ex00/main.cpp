#include <iostream>
#include "whatever.hpp"

int main( void ) {
int a = 2,b = 3;
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// Awesome e(2),f(3);
// swap( e, f );
// if (e > f)
// 	std::cout << "swap work\n";
// if (min( e, f) == f)
// 	std::cout << "f is the min\n";
// if (max( e, f) != f)
// 	std::cout << "e is the max\n";
return 0;
}