#include <iostream>
#include "Array.hpp"


int main(void){
Array<int> tabint(8);
tabint[6] = 12;
std::cout << tabint[6]<< "\n";
Array<std::string> tabstr(2);
tabstr[1] = "Bonjour les amis";
std:: cout << tabstr[0] << "\n";
std::cout << tabstr.size()<< "\n";

Array<int> tabint2(tabint);


std::cout << tabint2[6] << "\n";
tabint[6] = 250;
std::cout << tabint[6] << "\n";
std::cout << tabint2[6] << "\n";
Array<char> tabchar;
}