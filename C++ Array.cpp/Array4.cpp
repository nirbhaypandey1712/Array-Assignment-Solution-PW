/*Q4 - Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
that they belong to different arrays and are not at the same index. Here 1<size<101*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    if (n <= 1 || n >= 101) {
        cout << "Array size should be between 1 and 101" << endl;
        return 1;
    }

    int a[n], b[n];
    cout << "Enter the elements of array a: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the elements of array b: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int INT_MAX;
    int minSum = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                int sum = a[i] + b[j];
                if (sum < minSum) {
                    minSum = sum;
                }
            }
        }
    }

    cout << "The minimum sum of two elements from different arrays at different indices is: " << minSum << endl;
    
    return 0;
}
