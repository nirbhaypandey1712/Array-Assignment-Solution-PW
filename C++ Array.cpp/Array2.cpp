/*Q2 - Given an integer array and its size, find the sum of the greatest and the smallest integer present
in the array. Here 1< size <101*/

#include<iostream>
using namespace std;

int main() {
    int n, i, max, min, sum;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }
    max = arr[0];
    min = arr[0];
    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for (i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    sum = max + min;
    cout << "The sum of max and min number is: " << sum << endl;
    return 0;
}