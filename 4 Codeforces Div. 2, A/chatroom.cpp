// Question Link: https://codeforces.com/problemset/problem/58/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int j = 0;
    string temp = "hello";

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == temp[j])
            j++;
    }

    if (j == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}