#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main() {
    uint32_t c;
    u_int a;

    ifstream file {"/home/whiterose/CLionProjects/BoltzmannMachine/dataset/t10k-labels-idx1-ubyte", std::ios_base::binary};
    if(!file.good())
        cout << "error";
    file.read((char*) &c, sizeof(uint32_t));


    cout << (uint32_t) c;
}