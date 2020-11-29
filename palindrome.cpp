#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    int rev = 0, num = x;

    do {
        int digit = num % 10;
        rev = (rev * 10) + digit;

        num = num / 10;
    }
    while (num != 0);

    if (rev == x) {
        return true;
    }

    return false;
}

int main() {
    int number = 123;

    if (isPalindrome(number)) {
        cout << number << " is palindrome";
    } else {
        cout << number << " isn't palindrome";
    }

    return 0;
}