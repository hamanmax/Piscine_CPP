#include <iostream>
#include "Array.hpp"


int main(void){
std::cout << "------TEST\tTABINT\t---\n";
Array<int> tabint(8);
tabint[6] = 12;
std::cout << tabint[6]<< "\n";

Array<int> tabint2(tabint);
Array<int> tabint3 = tabint2;
std::cout << tabint2[6] << "\n";
tabint[6] = 250;
std::cout << tabint[6] << "\n";
std::cout << tabint2[6] << "\n";
std::cout << tabint3[6] << "\n";
std::cout << "------TEST\tTABCHAR\t---\n";
Array<char> tabcharnon;
Array<char> tabcharnon2(0);

Array<char> tabchar(6);
tabchar[5] = 'b';
std::cout << tabchar[5] << "\n";
tabchar[5] = 'a';
std::cout << tabchar[5] << "\n";
try{
	std::cout << tabcharnon2[0] << "\n";}
catch(const std::exception& e){
	std::cout << e.what() << '\n';}

std::cout << "------TEST\tTABSTR\t---\n";
Array<std::string> tabstr(2);
tabstr[1] = "Bonjour les amis";
std:: cout << tabstr[1] << "\n";
std::cout << tabstr.size()<< "\n";

std::cout << "------TEST\tTABDOUBLE\t---\n";
Array<double> tabdouble(250);
std::cout << tabdouble[5] << "\n";
tabdouble[5] = 3.1415984235;
std::cout << tabdouble[5] << "\n";
std::cout << tabdouble.size() << "\n";


}