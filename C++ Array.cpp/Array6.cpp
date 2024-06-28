/*Q6 - Given an integer array containing n elements. Find the element in the array for which all the elements
to its left are smaller than it and all the elements to the right of it are larger than it. Here 1<n<101.*/

#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int left = 0, right = n - 1;
    while (left < right) {
        if (arr[left] < arr[right]) {
            cout << arr[left] << " ";
            left++;
        }
        else {
            cout << arr[right] << " ";
            right--;
        }
    }
    return 0;
}