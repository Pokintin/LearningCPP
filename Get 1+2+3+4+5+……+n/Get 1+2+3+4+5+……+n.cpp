#include <iostream> // C++ Header File

int main() // Main File
{
	int n = 0, ans = 0;
	std::cin >> n; // Input "n"
	for (int i = 1; i <= n; i++) {
		ans += i; // Using for to get ans
	}
	std::cout << ans; // Output ans
	return 0; // END
}