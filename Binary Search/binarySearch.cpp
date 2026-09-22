#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
   sort(arr.begin(), arr.end(), greater<int>());

int low = 0;
int high = arr.size() - 1;

while (low <= high) {

    int mid = (low + high) / 2;

    if (arr[mid] > target)
        low = mid + 1;

    else if (arr[mid] < target)
        high = mid - 1;

    else
        return mid;
}

    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 3;

    int result = binarySearch(arr, target);

    cout << "Element found at index: " << result << endl;
}