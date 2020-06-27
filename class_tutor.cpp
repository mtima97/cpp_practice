#include<iostream>
using namespace std;

class Animal {// polymorphic class, because it declares virtual fun
    public:
        Animal() {
            cout << "Mother created \n";
        }
        ~Animal() {
            cout << "Mother destroyed \n";
        }
        virtual string greet() {// virtual funs work like a template
            return "Hello";
        }
};

class Mammal : public Animal {
    public:
        Mammal() {
            cout << "Daughter created \n";
        }
        ~Mammal() {
            cout << "Daughter deleted \n";
        }
        string greet() {
            return "Hi, I'm mammal";
        }
};

class Fish : public Animal {
    public:
        string name = "Fish";
        string greet() {
            return "Hi, I am " + name;
        }
};
/*
You have different classes with a function of the same name, and even the same parameters, but different implementations
*/
int main() {// The derived class needs its base class in order to work
    Mammal whale;// polymorphism means having many forms
    Fish silurus;

    Animal *animal = &whale;
    Animal *animal2 = &silurus;

    cout << animal->greet() << endl;
    cout << animal2->greet() << endl;

    return 0;
}