#include <iostream>

int main(){
    char c;
    ifstream file ("dataset/train-images-idx3-ubyte");
    file.read(&c, sizeof(char));

    cout << c;

}