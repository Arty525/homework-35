#include <iostream>
#include <vector>
#include <unordered_set>

auto a = [](std::vector<int> v) {
	auto u = std::make_unique<std::vector<int>>();
	std::unordered_set<int> numbers;
	for (auto i : v) {
		if (!numbers.count(i)) {
			numbers.insert(i);
		}
		else {
			numbers.erase(i);
		}
	}
	for (auto i : numbers) {
		u->push_back(i);
	}
	return u;
};

int main() {
	std::initializer_list<int> l = { 5,4,5,3,2,1 };
	std::vector<int> v(l);
	auto u = a(v);
	for (auto i : *u) {
		std::cout << i << std::endl;
	}
	return 0;
}