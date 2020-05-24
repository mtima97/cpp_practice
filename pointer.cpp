#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void greet(string name) {
    cout << "Hi, " << name << endl;
}

void printRand() {
    srand(time(0));
    cout << rand() % 5;
}

int main() {
    int year = 1997;
    // here asterisk sign declares pointer
    int *address = &year;// holds memory location of year

    cout << *address << endl;// dereference operator returns value of a variable at specified address
    // allocates memory at run time within the heap
    double *age = new double;// this operator returns address of allocated space for indicated type
    *age = 23;
    cout << "age is " << *age << endl;

    delete age;// deletes allocated memory
    age = NULL;

    cout << "size of integer = " << sizeof(int) << endl;

    // greet("Timur");
    printRand();

    return 0;
}