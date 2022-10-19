#include <iostream>
#include <string>

int main()
{
	std::string age; 
	std::cout << "Enter your age\n";
	std::cin >> age;
	int intVal = atoi(age.c_str());
	if (age == "0")
	{
		std::cout << "Age 0 doesn't make sense\n";
	}
	else	if (intVal == 0)
	{
		std::cout << "You entered some text (" << age.c_str() << ") instead of a numeric value\n";
	}
	else
	{
		int YearOfBirth = 2020 - intVal;
		std::string result = std::to_string(YearOfBirth);
		std::cout << "You were born in" << result.c_str() << "\n";

	}
}
