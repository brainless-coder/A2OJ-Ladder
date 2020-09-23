// Question Link: https://codeforces.com/problemset/problem/118/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    


    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i' ) {
            s.erase(s.begin() + i);
            --i;
        }
    }

    for (int i = 0; i < s.length(); i+=2) {
        s.insert(i, ".");
    }

    cout << s;
    return 0;
}