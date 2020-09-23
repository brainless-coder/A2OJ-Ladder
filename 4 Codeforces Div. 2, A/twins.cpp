// Question Link: https://codeforces.com/problemset/problem/160/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a, sum = 0, count = 0;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; ++i) {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end(), greater<int>());
    int totalSum = accumulate(v.begin(), v.end(), 0);

    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
        totalSum -= v[i];
        count++;
        if (sum > totalSum) {
            break;
        }
    }

    cout << count;

    return 0;
}