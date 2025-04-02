#include <iostream>
using namespace std;

int main() {
    int number, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> number;

    int temp = number;
    do {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    } while (temp != 0);


    cout << "Sum of digits: " << sum << endl;


    cout << "Divisibility test for the sum of digits:" << endl;

    int i = 2;
    do {
        if (sum % i == 0) {
            cout << sum << " is divisible by " << i << endl;
        } else {
            cout << sum << " is not divisible by " << i << endl;
        }
        i++;
    } while (i <= 9);

    return 0;
}
