//
// Created by Grubbly Ernesto on 3/29/22.
//

# include <random>
# include <iostream>

class Base {
public:
	virtual ~Base() {};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base * generate(void)
{
	Base *ptr;
	switch (rand() % 3)
	{
		case 0:
			ptr = (new A());
			break;
		case 1:
			ptr = (new B());
			break;
		default:
			ptr = (new C());
			break;
	}
	return ptr;
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Something bad happened" << std::endl;
}

void identify(Base& p)
{
	try	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	} catch (std::bad_cast &bc) {}

	try	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	} catch (std::bad_cast &bc) {}

	try	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	} catch (std::bad_cast &bc) {}
}

int	main()
{
	srand(time(NULL));
	Base *ptr = generate();

	identify(ptr);
	identify(*ptr);

	delete ptr;

	return 0;
}
