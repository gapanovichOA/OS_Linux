#include <iostream>
#include <sstream>


int main() {
    std::string str, val, res;
    getline(std::cin, str);
    std::stringstream stream(str);
    while (stream >> val) {
        int tmp = stoi(val, nullptr, 10);
        std::string tmp_str = std::to_string(tmp*7);
        res.append( tmp_str+ " ");
    }
    std::cout << res << "\n";
    return 0;
}
