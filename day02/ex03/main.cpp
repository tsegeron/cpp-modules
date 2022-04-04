#include "Point.hpp"

int main( void )
{
	std::string	msg1 = "The Point is \033[1;32mINSIDE\033[0m the triangle";
	std::string	msg2 = "The Point is \033[1;31mOUTSIDE\033[0m the triangle";

	{
		Point	a(3.14f, 5.46f);
		Point	b(5.28f, 12.81f);
		Point	c(7.77f, 1.13f);
		Point	point(4.44f, 5.53f);

		std::cout << (bsp(a, b, c, point) ? msg1 : msg2) << std::endl;
	}
	{
		Point a(3, 5);
		Point b(5, 13);
		Point c(8, 1);
		Point point(4, 6);

		std::cout << (bsp(a, b, c, point) ? msg1 : msg2) << std::endl;
	}
	{
		Point	a(3.14f, 5.46f);
		Point	b(5.28f, 12.81f);
		Point	c(7.77f, 1.13f);
		Point	point(4.44f, 3.83f);

		std::cout << (bsp(a, b, c, point) ? msg1 : msg2) << std::endl;
	}
	{
		Point	a(3.14f, 5.46f);
		Point	b(5.28f, 12.81f);
		Point	c(7.77f, 1.13f);
		Point	point(4.44f, 4.23f);

		std::cout << (bsp(a, b, c, point) ? msg1 : msg2) << std::endl;
	}
	{
		Point	a(3.14f, 5.46f);
		Point	b(5.28f, 12.81f);
		Point	c(7.77f, 1.13f);
		Point	point(7.77f, 1.13f);

		std::cout << (bsp(a, b, c, point) ? msg1 : msg2) << std::endl;
	}

	return 0;
}
