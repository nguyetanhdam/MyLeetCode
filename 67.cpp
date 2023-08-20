#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string addBinary(string a, string b) {
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;
    stringstream result;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;

        if (i >= 0) {
            sum += a[i--] - '0';
        }

        if (j >= 0) {
            sum += b[j--] - '0';
        }

        carry = sum / 2;
        sum %= 2;

        result << sum;
    }

    string resultStr = result.str();
    reverse(resultStr.begin(), resultStr.end());

    return resultStr;
}

int main() {
    string a = "1010";
    string b = "1011";
    string sum = addBinary(a, b);

    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;

    return 0;
}
