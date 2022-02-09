#include <iostream> // C++ Header File

int main() // Main stuff
{
	int num = 0, Bit = 0, Ten = 0, Hundredth = 0;
	std::cin >> num; 
	Hundredth = num / 100;
	Ten = num % 100 / 10;
	Bit = num % 10;
	std::cout << Hundredth + Ten + Bit;
	return 0;
}