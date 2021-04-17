#include <iostream>
#include <ctime>
class Base
{
	public:
		virtual~Base(){};
};

class A:public Base{};
class B:public Base{};
class C:public Base{};

Base * generate(void)
{
	int choice = rand() % 3;

	if (choice == 0)
		return(new A);
	else if (choice == 1)
		return(new B);
	return(new C);
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A\n";
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B\n";
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C\n";
}

void identify_from_reference(Base & p)
{
	try{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A\n";
	}
	catch(std::exception){}
	try{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B\n";
	}
	catch(std::exception){}
	try{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C\n";
	}
	catch(std::exception){}
}

int main(void)
{
	srand(time(NULL));
	Base *Tutu;

	Tutu = generate();
	identify_from_pointer(Tutu);
	identify_from_reference(*Tutu);

	delete Tutu;
}