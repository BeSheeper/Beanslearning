#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float temp_f{}, temp_c{};
	cout << "Enter the temperature in Fahrenheit" << endl;
	cin >> temp_f;
	temp_c = (temp_f - 32) * (5.0 / 9.0);
	cout << "The temperature in Celsius is " << temp_c << "\n";
}