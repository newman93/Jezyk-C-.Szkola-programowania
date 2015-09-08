#include <iostream>

int main(void)
{
	double x;
	
	std::cout << "Podaj wartość: ";
	while (! (std::cin >> x))
	{
		std::cin.clear();
		while (std::cin.get() != '\n')
			continue;
	}
	std::cout << "Podano " << x << std::endl;
	
	return 0;
}
