// program to Find pair with given sum

#include <bits/stdc++.h>
using namespace std;    
int main() {
    int n, sum;
    cin >> n >> sum;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        int x = sum - arr[i];
        if (s.find(x) != s.end()) {
            cout << "Pair found: (" << arr[i] << ", " << x << ")" << endl;
            return 0;
        }
        s.insert(arr[i]);
    }
    cout << "No pair found" << endl;
    return 0;
}