#include <iostream>
#include <unistd.h>

using namespace std;

string pPath = "../../P/cmake-build-debug/P";
string aPath = "../../A/cmake-build-debug/A";
string mPath = "../../M/cmake-build-debug/M";
string sPath = "../../S/cmake-build-debug/S";



bool launch(const string& path) {
    int pipes [3];
    pipe(pipes);
    if (!fork()) {
        if (dup2(pipes[1], 1) == -1) {
            return true;
        }
        system(path.c_str());
        return false;
    } else if (dup2(pipes[0], 0) == -1) {
        close(pipes[1]);
        return true;
    }

}

int main() {
    if (launch(aPath) == 0)
        if (launch(mPath) == 0)
            if (launch(pPath) == 0)
                system(sPath.c_str());

    return 0;
}