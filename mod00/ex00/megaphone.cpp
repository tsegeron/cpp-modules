#include <iostream>


int main(int ac, char *av[])
{
	using namespace std;

	if (ac < 2)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		for(int i = 1; av[i]; i++)
			for(int j = 0; av[i][j]; j++)
				cout << (char )toupper(av[i][j]);
		cout << endl;
	}
	return 0;
}
