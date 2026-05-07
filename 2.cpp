#include <fstream>
#include <iostream>

int main() {
    std::ifstream file("numbers.txt");

    int a, b, c;
    file >> a >> b >> c;

    std::cout << a + b + c;

    file.close();
    return 0;
}./