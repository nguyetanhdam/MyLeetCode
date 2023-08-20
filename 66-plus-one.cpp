/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    int carry = 1;

    for (int i = n - 1; i >= 0; --i) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
    }

    if (carry > 0) {
        digits.insert(digits.begin(), carry);
    }

    return digits;
}

int main() {
    vector<int> digits = {1, 4, 9};
    vector<int> pl = plusOne(digits);

    for (int x : pl) {
        cout << x << ' ';
    }

    return 0;
}
