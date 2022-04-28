#include <iostream>
#include <thread>
#include <vector>

std::atomic_bool x;

void print() {
    std::cout << "CIAO\n";
}

int main() {
    std::vector<int> a;
    x = false;
    std::cout << x;
}
