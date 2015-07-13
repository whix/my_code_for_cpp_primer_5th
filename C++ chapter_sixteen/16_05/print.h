#ifndef PRINT_H
#define PRINT_H
#include <string>
#include <iostream>

template<typename T>
void print(const T &arr)
{
	for (const auto &a : arr)
	{
		std::cout << a << std::endl;
	}
}

#endif // !PRINT_H
