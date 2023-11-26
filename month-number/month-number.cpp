#include <iostream>
#include <cstdlib>

int main()
{
	int month_number;
	std::cout << "Enter the month number: ";
	if (!(std::cin >> month_number))
	{
		std::cerr << "Its not number!";
		std::exit(0);
	}

	switch (month_number)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		std::cout << "This month have 31 days!";
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		std::cout << "This month have 30 days!";
		break;

	case 2:
	{
		int year;
		std::cout << "Enter the year: ";
		std::cin >> year;

		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			std::cout << "This month have 29 days!";
		}
		else
		{
			std::cout << "This month have 28 days!";
		}
	}

	break;

	default:
		std::cout << "Worst number!";

	}
}

