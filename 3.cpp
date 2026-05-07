#include <fstream>

int main() {
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");

    char ch;
    while (in.get(ch)) {
        out.put(ch);
    }

    in.close();
    out.close();
    return 0;
}