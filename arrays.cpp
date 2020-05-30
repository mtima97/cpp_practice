#include<iostream>
using namespace std;

class Animal {// parent class is called the base class, child class is called derived class
    public:
        Animal(bool alive = true) : isAlive(alive) {
        }
        Animal(int n, bool alive) : legs(n), isAlive(alive) {// it's possible to have multiple constructors with diff number of params
        }
        void eat() {
            cout << "Animal is eating" << endl;
        }
        void setName(string payload) {
            name = payload;
        }
        string getName() {
            return name;
        }
        int legs;
    private:
        string name;
        const bool isAlive;
    protected:
        char gender = 'M';
};

class Mammal : public Animal {// base classes can be specified in comma-separated list
    public:
        Mammal() {}
        char getGender() {
            return gender;
        }
};

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int twoDimesional[2][2] = {
        {1, 2},
        {3, 4}
    };

    Animal dog(4, true);
    dog.setName("Reks");

    cout << dog.getName() << endl;
    cout << dog.legs << endl;
    cout << endl;

    Mammal whale;
    whale.eat();
    cout << whale.getGender() << endl;
    whale.setName("Fish");
    cout << whale.getName() << endl;

    return 0;
}
