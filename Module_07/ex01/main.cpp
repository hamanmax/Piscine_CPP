
#include <iostream>
#include <string>
#include "iter.hpp"

int main()
{
	int test[5] = {15,16,17,18,19};

	::iter(test,5,push);
}