#include <iostream>
#include <string>

using namespace std;

int hammingWeight(uint32_t n)
{
    int count = 0;
    while (n > 0)
    {
        count += n & 1;  // Check the least significant bit
        n >>= 1;         // Right shift to move to the next bit
    }
    return count;
}

int main()
{
    uint32_t num = 00000000000000000000000000001011;
    cout << hammingWeight(num);
    return 0;
}
