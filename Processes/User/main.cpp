#include<iostream>
#include <cstdlib>

std::string kill_path = "../../Killer/cmake-build-debug/Killer";

void printProcesses() {
    system("ps -e");
}

void kill(std::string str) {
    system((kill_path + " " + str).c_str());
}

int main() {
    printProcesses();
    setenv("PROC_TO_KILL", "Rhythmbox", 0);
    kill("");
    unsetenv("PROC_TO_KILL");
    printProcesses();

    std::string name;
    std::cout << "Enter name\n";
    std::cin >> name;
    kill(name);
    printProcesses();

    std::string id;
    std::cout << "Enter id\n";
    std::cin >> id;
    kill(id);
    printProcesses();



    return 0;
}