//
// Created by Grubbly Ernesto on 3/29/22.
//

# include "Template.hpp"

# define LINE	std::cout << "----------------------------------------------" << std::endl;


typedef struct test1
{
	std::string	name;
	size_t		age;
}	test1;

class Awesome
{
private:
	int	_n;
public:
	Awesome(void): _n(0) {}
	Awesome(int n): _n(n) {}
	Awesome & operator = (Awesome & a) {_n = a._n; return *this; }
	bool operator == (Awesome const &rhs) const {return this->_n == rhs._n;}
	bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int get_n() const { return _n; }
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int main( void ) {

	{
		std::cout << "----Test from subject----" << std::endl;
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		std::cout << "----Test from subject----" << std::endl;

	}
	LINE
	{
		int a = 42;
		int b = 21;
		std::cout << "Before\na = " << a << ", b = " << b << std::endl;
		swap<int>(a, b);
		std::cout << "After\na = " << a << ", b = " << b << std::endl << std::endl;
		std::cout << "Max(a, b) = " << max<int>(a, b) << std::endl;
		std::cout << "Min(a, b) = " << min<int>(a, b) << std::endl;
	}
	LINE
	{
		float	a = 42.424242f;
		float	b = 21.2121f;
		std::cout << "Before\na = " << a << ", b = " << b << std::endl;
		swap<float>(a, b);
		std::cout << "After\na = " << a << ", b = " << b << std::endl;
		std::cout << "Max(a, b) = " << max<float>(a, b) << std::endl;
		std::cout << "Min(a, b) = " << min<float>(a, b) << std::endl;
	}
	LINE
	{
		test1	a = {"Eternity", 42};
		test1	b = {"Vault", 21};
		std::cout << "Before\na = " << a.name << ": " << a.age << ", b = " << b.name << ": " << b.age << std::endl;
		swap<test1>(a, b);
		std::cout << "After\na = " << a.name << ": " << a.age << ", b = " << b.name << ": " << b.age << std::endl;
	}
	LINE
	{
		Awesome a(2), b(4);

		std::cout << "Before\na = " << a << ", b = " << b << std::endl;
		swap(a, b);
		std::cout << "After\na = " << a << ", b = " << b << std::endl;
		std::cout << "Max(a, b) = " << max(a, b) << std::endl;
		std::cout << "Min(a, b) = " << min(a, b) << std::endl;
	}

	return 0;
}
