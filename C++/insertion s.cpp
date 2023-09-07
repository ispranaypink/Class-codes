#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int position = 2;
    int newValue = 25;

    // Shift elements to make space for the new element
    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value at the desired position
    arr[position] = newValue;

    // Increase the size of the array
    size++;

    // Print the updated array
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

