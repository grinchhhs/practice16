#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ofstream file("journal.txt", std::ios::app);

    std::string surname;
    std::string status;

    std::cout << "Enter surname: ";
    std::cin >> surname;

    std::cout << "Enter status (present/absent): ";
    std::cin >> status;

    file << surname << " " << status << std::endl;

    file.close();
    return 0;
}