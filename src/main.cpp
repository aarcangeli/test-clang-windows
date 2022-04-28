#include <iostream>
#include <thread>
#include <vector>

std::atomic_bool x = false;

void print() {
    std::cout << "CIAO\n";
}

int main() {
    std::vector<int> a;
    std::cout << x;
}
