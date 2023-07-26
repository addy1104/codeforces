#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

string canBeSorted(vector<int>& arr) {
    int n = arr.size();
    vector<int> odd, even;

    for (int num : arr) {
        if (num % 2 == 0)
            even.push_back(num);
        else
            odd.push_back(num);
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    int oddIdx = 0, evenIdx = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            arr[i] = even[evenIdx];
            evenIdx++;
        } else {
            arr[i] = odd[oddIdx];
            oddIdx++;
        }
    }

    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            return "NO";
        }
    }

    return "YES";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << canBeSorted(arr) << endl;
    }

    return 0;
}
