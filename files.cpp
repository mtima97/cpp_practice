#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream MyFile("test.txt", ios::app);

    if (MyFile.is_open()) {
        MyFile << "Hello world!\n";
        cout << "finished";
    } else {
        cout << "Something went wrong";
    }

    MyFile.close();
    
    return 0;
}