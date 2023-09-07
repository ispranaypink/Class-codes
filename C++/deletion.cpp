#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int position = 2; // Position of the element to delete

    // Shift elements to overwrite the element to be deleted
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Reduce the size of the array
    size--;

    // Print the updated array
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
