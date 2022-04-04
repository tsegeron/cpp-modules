#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Contact	{
private:
		size_t 				_Index;
		static std::string	_DataNames[5];
		std::string			_DataSet[5];

		bool	isNumber(const std::string& str) const;

public:
				Contact(void);
		virtual	~Contact(void);

		void	getData(void) const;
		bool	setData(size_t index);
		void	showBriefInfo(void)	const;

};

#endif //CONTACT_HPP
