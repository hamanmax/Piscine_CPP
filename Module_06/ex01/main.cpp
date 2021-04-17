#include "string"
#include "iostream"
#include "sstream"

struct Data { std::string s1; int n; std::string s2; };
Data * deserialize(void * raw)
{
	Data * ret = new Data;
	ret->s1 = reinterpret_cast<char *>(raw);
	ret->n = *(reinterpret_cast<int *>(raw) + (sizeof(char *)/sizeof(int)));
	ret->s2 = reinterpret_cast<char *>(raw) + sizeof(char *) + sizeof(int);
	delete[] reinterpret_cast<char *>(raw);
	return ret;
}

void *serialize(void)
{
	char *raw = new char[20];
	int nbr = rand();
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
	return raw;
}
int main(void)
{
	Data * tutu;
	void *ptr;
	srand(time(NULL));

	ptr = serialize();
	tutu = deserialize(ptr);
	delete tutu;
}