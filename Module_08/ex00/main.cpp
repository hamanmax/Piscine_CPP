#include<iostream>
#include<algorithm>
#include<vector>
#include"easyfind.hpp"


int main()
{
	std::vector<int>  tab;
	tab.push_back(12);
	tab.push_back(15);
	tab.push_back(25);
	tab.push_back(35);

	try{
		easyfind(tab,7);}
	catch (std::exception & e){
		std::cout << e.what();}
	try{
		easyfind(tab,35);}
	catch (std::exception & e){
		std::cout << e.what();}
}