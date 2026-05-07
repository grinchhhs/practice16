#include <fstream>
#include <iostream>

int main() {
    std::ifstream file("grades.txt");
    std::ofstream result("result.txt");

    int grade;
    int sum = 0;
    int count = 0;

    while (file >> grade) {
        sum += grade;
        count++;
    }

    double avg = 0;

    if (count != 0) {
        avg = (double)sum / count;
    }

    result << avg;

    file.close();
    result.close();
    return 0;
}