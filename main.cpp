#include<iostream>// standard stream objects that input and output data
using namespace std;// tells the compiler to use standard namespace

int main() {
    int age = 23;
    double height = 183.5;
    string text = "I was born in 1997";
    char letter = 'A';

    cout << "Hello world." << " I am from Kazakhstan!" << endl;// use insertion operator to insert data into the stream
    cout << "I love programming ";
    cout << "with C++. \nI am " << age++ << " years old." << endl;

    if (age == 24) {
        cout << text << letter;
    }
    
    // semicolon terminates a statement
    return 0;
}