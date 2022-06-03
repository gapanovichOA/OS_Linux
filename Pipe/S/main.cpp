#include <iostream>
#include <sstream>


int main() {
    std::string str, val;
    int res=0;
    getline(std::cin, str);
    std::stringstream stream(str);
    while (stream >> val) {
        int tmp = stoi(val, nullptr, 10);
        res+=tmp;
    }
    std::cout << res << "\n";
    return 0;
}