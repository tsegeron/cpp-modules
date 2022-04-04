//
// Created by Grubbly Ernesto on 3/29/22.
//
#include <iostream>
#include <string>
int main()
{
	class A {};
	class B {};
	A * a = new A;
	B * b = reinterpret_cast<B*>(a);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
}