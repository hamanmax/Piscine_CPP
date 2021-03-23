#ifndef MAIN_HPP
#define MAIN_HPP

class main : virtual public 
{
	private:
		/*Arg*/
	protected:
		/*Arg*/
	public:
		main();
		main(const main & copy);
		main & operator=(const main & op);
		~main();
};

main::main(){}

main::main(){}

main::main(const main & copy){*this = copy;}

main & main::operator=(const main & op){
}

main::~main(){}

#endif