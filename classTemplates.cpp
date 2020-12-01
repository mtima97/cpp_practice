#include<iostream>
using namespace std;

template <class T>

class Animal {
    public:
        Animal(T name) {
            cout << "Isn't valid" << endl;
        }
};

template <>

class Animal<string> {
    public:
        Animal(string name) {
            cout << "Name is " << name << endl;
        }
};

int main() {
    Animal<int> animal(23);
    Animal<string> animal2("Reks");

    return 0;
}