#include <iostream>
using namespace std;

// Recursive function for Binary Search
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high)   // Base case: not found
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == key)   // Element found
        return mid;
    else if (key < arr[mid])
        return binarySearch(arr, low, mid - 1, key); // Search left half
    else
        return binarySearch(arr, mid + 1, high, key); // Search right half
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else{
        cout << "Element not found." << endl;
}
    return 0;
}
