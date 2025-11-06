#include<iostream>
using namespace std;

// checking if an array is sorted using recursion
bool isSorted(int arr[], int n, int i) {
    if (i == n - 1) {
        return true;
    }
    if (arr[i] > arr[i + 1]) {
        return false;
    }
    return isSorted(arr, n, i + 1); // fixed here
}

int main() {
    int arr[5] = {2, 4, 6, 8, 10};
    cout << isSorted(arr, 5, 0) << endl; // Output: 1 (true)

    int arr1[5] = {0, 6, 2, 5, 7};
    cout << isSorted(arr1, 5, 0) << endl; // Output: 0 (false)

    return 0;
}