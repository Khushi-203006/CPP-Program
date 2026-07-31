#include <iostream>
using namespace std;

// Recursive function for Linear Search
int linearSearch(int arr[], int n, int key, int index = 0) {
    if (index == n)   // Base case: reached end of array
        return -1;
    if (arr[index] == key)  // Element found
        return index;
    return linearSearch(arr, n, key, index + 1); // Recursive call
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = linearSearch(arr, n, key);
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
