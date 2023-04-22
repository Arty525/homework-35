#include <iostream>
#include <vector>
int main() {
	std::initializer_list<int> l = { 5,4,3,2,1 };
	std::vector<int> v(l);
	for (auto n : v) {
		std::cout << n << std::endl;
	}
	return 0;
}