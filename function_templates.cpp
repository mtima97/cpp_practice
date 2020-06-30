#include<iostream>
using namespace std;

template<typename T>// template type
T sum(T a, T b) {// template type parameters
    return a + b;
}

template<class T, class U>
T smaller(T a, U b) {
    return a < b ? a : b;
}

int main() {
    cout << "sum equals to " << sum(4, 5) << endl;
    cout << "sum equals to " << sum(4.3, 5.7) << endl;
    cout << "smaller number is " << smaller(4.3, 5) << endl;

    return 0;
}