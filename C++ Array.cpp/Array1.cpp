//Q1 - Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

#include <iostream>
using namespace std;

int main () {
    int n, i, odd = 0, even = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    cout << "The count of odd numbers is: " << odd << endl;
    cout << "The count of even numbers is: " << even << endl;
    return 0;
}