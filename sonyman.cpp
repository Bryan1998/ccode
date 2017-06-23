#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

int main(int argc, char const *argv[]) {
	int x;
	x = 2;
	double woo;
	woo = 3;
	if (x == woo) {
		std::cout << "\n x = woo \n";
	} else {
		std::cout << "\n x != woo \n";
	}
	std::cout << "enter input for the var cool " << '\n';
	std::string cool;
	std::cin >> cool;
	std::cout << cool;
	return 0;
}
