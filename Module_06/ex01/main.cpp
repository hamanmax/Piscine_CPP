#include "string"
#include "iostream"
#include "sstream"

struct Data { std::string s1; int n; std::string s2; };
Data * deserialize(void * raw)
{
	Data * ret = new Data;
	ret->s1 = reinterpret_cast<char *>(raw);
	ret->n = *(reinterpret_cast<int *>(raw) + sizeof(char *) / sizeof(int));
	ret->s2 = reinterpret_cast<char *>(raw) + sizeof(char *) + sizeof(int);
	delete[] reinterpret_cast<char *>(raw);
	return ret;
}

void *serialize(void)
{
	char *raw = new char[20];
	int nbr = rand();
	int cpnbr = nbr;
	std::string s1,s2,alphanum("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	for(int i = 0;i < 8;i++)
		s1 += alphanum[rand() % 62];
	s1[7] = 0;
	for(int i = 0;i < 8;i++)
		s2 += alphanum[rand() % 62];
	s2[7] = 0;
	for (int i = 0; i < 20;i++)
	{
		if (i >= 0 && i < 8)
			raw[i] = s1[i];
		if (i >= 12)
			raw[i] = s2[i - 12];
	}
	for (int i = 8;i < 12;i++)
	{
		raw[i] = 255 & nbr;
		nbr = nbr >> 8;
	}
	std::cout << "str1\t\t= " << s1 << "\nstr2\t\t= " << s2 << "\nnb\t\t= " << cpnbr << "\n";
	return raw;
}
int main(void)
{
	Data * tutu;
	void *ptr;
	srand(time(NULL));


	std::cout << "------------Serialization------------\n";
	ptr = serialize();
	std::cout << "------------Deserialization------------\n";
	tutu = deserialize(ptr);
	std::cout << "Data->s1\t= " << tutu->s1 << "\nData->s2\t= " << tutu->s2 << "\nData->n\t\t= " << tutu->n << "\n";
	delete tutu;
	std::cout << "------------Serialization------------\n";
	ptr = serialize();
	std::cout << "------------Deserialization------------\n";
	tutu = deserialize(ptr);
	std::cout << "Data->s1\t= " << tutu->s1 << "\nData->s2\t= " << tutu->s2 << "\nData->n\t\t= " << tutu->n << "\n";
	delete tutu;
}