/*Q5 - Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of
both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.*/

#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int>& nums, int n) {
    int sum_expected = (n * (n + 1)) / 2;
    int sum_actual = 0;

    for (int num : nums) {
        sum_actual += num;
    }

    return sum_expected - sum_actual;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 1 || n >= 101) {
        cout << "n should be between 1 and 101" << endl;
        return 1;
    }

    vector<int> nums(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int missingNumber = findMissingNumber(nums, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
