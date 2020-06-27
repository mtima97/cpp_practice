#include<iostream>
using namespace std;

class Building {// this class is called abstract class it cannot have objects
    public:// pure virtual function
        virtual void writeName() = 0;// must be overriden in derived class
        Building(string payload) {
            name = payload;
        }
        Building() {}

        string name;
};

class House : public Building {
    public:
        House() {
            //
        }
        void writeName() {
            cout << name << endl;
        }
        void setName(string payload) {
            name = payload;
        }
};

int main() {
    House villa;
    villa.setName("Villa");
    villa.writeName();

    return 0;
}