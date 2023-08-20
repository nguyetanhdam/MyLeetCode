#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> myVector = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int target = 5;

    auto it = std::find(myVector.begin(), myVector.end(), target);

    if (it != myVector.end()) {
        int index = std::distance(myVector.begin(), it);
        std::cout << "Gia tri " << target << " duoc tim thay tai chi so " << index << " trong vector.\n";
    } else {
        std::cout << "Gia tri " << target << " khong co trong vector.\n";
    }

    return 0;
}

