// Question Link: https://codeforces.com/problemset/problem/339/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a;

    vector<int> b;

    for (int i = 0; i < s.length(); i+=2) {
        a = s[i] - '0';
        b.push_back(a);
    }

    sort(b.begin(), b.end());

    for (int i = 0; i < b.size(); ++i) {
        if (i == b.size()-1) {
            cout << b[i];
        } else {
            cout << b[i] << "+";
        }
        
    }

    return 0;
}