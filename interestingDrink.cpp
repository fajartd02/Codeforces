#include <bits/stdc++.h>
using namespace std;

int binarySolve(vector<int> &arr, int left, int right, int target) {
    int mid = (left + right) / 2;
    int ans = -1;
    if (target < arr[0]) {
        return 0;
    } else if (target >= arr[right]) return right + 1;
    else {

        while(left <= right) {
            mid = (left + right) / 2;
            if(arr[mid] <= target) {
                left = mid + 1;
                ans = mid;
            } else {
                right = mid - 1;
            }
        }

    }
    return ans + 1;
}

int main() {

    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    int t;
    cin >> t;

    while(t--) {
        int num;
        cin >> num;
        cout << binarySolve(arr, 0, n-1, num) << endl;
    }
    return 0;
}