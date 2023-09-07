#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int searchValue = 30; // Element to search for
    bool found = false;

    // Iterate through the array to search for the element
    for (int i = 0; i < size; ++i) {
        if (arr[i] == searchValue) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << "Element found in the array." << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
