#include <iostream>
#include <set>


int main() {
    int z;
    std::cout << "[IN]: " << std::endl;
    std::cin >> z;

    std::set<int> mySet;

    for (int i = 0; i < z; ++i) {
        int number;
        std::cin >> number;
        mySet.insert(number);

    }

    std::cout << "[OUT]: " << " ";
    for (auto x = mySet.rbegin(); x != mySet.rend(); ++x) {
        std::cout << *x << " ";
    }

    return 0;
}