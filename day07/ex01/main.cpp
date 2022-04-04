//
// Created by Grubbly Ernesto on 3/29/22.
//

# include "iter.hpp"
//# include <iostream>

# define LINE	std::cout << "----------------------------------------------" << std::endl;

class Awesome {
public:
	Awesome(void) : _n(42) { return; }

	int get(void) const { return this->_n; }

private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs){o<< rhs.get(); return o; }

template< typename T>
void print( T const & x){ std::cout << x << std::endl; return; }

int main() {
	int tab[] = {0, 1, 2, 3, 4};// .-l never understood why you can' write int[] tab. Wouldn't thdt make more sense?
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	return 0;
}

//int main( void ) {
//	{
//		int arr[] = {1, 2, 3, 4, 5};
//
//		for (int i = 0; i < 5; i++)
//			std::cout << arr[i] << " ";
//		std::cout << std::endl;
//
////		iter(arr, sizeof(arr), square);
//		iter(arr, sizeof(arr) / sizeof(int), square);
//
//		for (int i = 0; i < 5; i++)
//			std::cout << arr[i] << " ";
//		std::cout << std::endl;
//	}
//	LINE
//	{
//		float arr[] = {1.1, 2.2, 3.3};
//
//		for (int i = 0; i < 3; i++)
//			std::cout << arr[i] << " ";
//		std::cout << std::endl;
//
//		iter(arr, sizeof(arr) / sizeof(float), square);
//
//		for (int i = 0; i < 3; i++)
//			std::cout << arr[i] << " ";
//		std::cout << std::endl;
//	}
//
//	return 0;
//}
