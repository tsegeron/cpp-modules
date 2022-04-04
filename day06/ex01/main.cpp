//
// Created by Grubbly Ernesto on 3/29/22.
//

# include "Serialize.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

void	printData(Data *src)
{
	std::cout	<< src->name << std::endl
				<< src->nickname << std::endl
				<< src->phoneNum << std::endl
				<< src->secret << std::endl
				<< src->age << std::endl;
	std::cout << src << std::endl;

}

int	main()
{
	Data		before = {"Ural", "Laru", "88005553535", "Picasso", 13};
	Data		*after;

	printData(&before);
	std::cout << std::endl;

	after = deserialize(serialize(&before));

	before.name = "Suka";
	printData(after);

	return 0;
}
