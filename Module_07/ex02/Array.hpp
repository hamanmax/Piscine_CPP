#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>
#include <iostream>

template<class T>
class Array
{
	private:
		unsigned int _size;
		T * _Arr;
	public:
		Array<T>():_size(){
			this->_Arr = new T[0];
		}
		Array<T>(unsigned int n):_size(n){
			this->_Arr = new T[this->_size];
		}
		Array<T>(Array const & copy):_size(copy._size){
			this->_Arr = new T[copy._size];
			for (unsigned int i = 0;i < this->_size;i++)
			{
				this->_Arr[i] = copy._Arr[i];
			}
		}
		~Array() {
			if (_size == 0)
				delete[] _Arr;
			else
				delete[] _Arr;
		}
		Array & operator=(const Array & copy) {
			this->_size = copy._size;
			delete[] this->_Arr;
			if (copy._size == 0)
				this->_Arr = new T[0];
			else
				this->_Arr = new T[this->_size];
			for (size_t i = 0; i < this->_size; i++) {
				this->_Arr[i] = copy._Arr[i];
			}
			return *this;
		}
		
		T & operator[](unsigned int nb){
			if (nb >= this->_size)
				throw OutOfBoundException();
			return(this->_Arr[nb]);
		}

		unsigned int size(){return this->_size;}
		class OutOfBoundException: virtual public std::exception
		{
			public:
			virtual const char * what() const throw(){
				return("Out of bound Array");
			};
		};
};

#endif