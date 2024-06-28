//Q3 - Given an integer array and its size, reverse the array and print it . Here 1<size<101

#include <iostream>
using namespace std;

int main() {
    int n, i, j, temp;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (i = 0, j = n - 1; i < j; i, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout << "Reversed array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}