#include <iostream>
#include <cstdio>

int main() {
    const char* command = "dir"; // Replace "dir" with your desired command
    FILE* pipe = _popen(command, "r");
    if (pipe == nullptr) {
        std::cerr << "Error: _popen() failed." << std::endl;
        return 1;
    }
    char buffer[128];
    while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
        std::cout << buffer;
    }
    if (feof(pipe) == 0) {
        std::cerr << "Error: fgets() failed." << std::endl;
        return 1;
    }
    int status = _pclose(pipe);
    if (status == -1) {
        std::cerr << "Error: _pclose() failed." << std::endl;
        return 1;
    }
    return status;
}