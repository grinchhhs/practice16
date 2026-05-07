#include <fstream>
using namespace std;

int main() {
    ofstream file("hello.txt");
    file << "Програмування — це круто!";
    file.close();
    return 0;
}