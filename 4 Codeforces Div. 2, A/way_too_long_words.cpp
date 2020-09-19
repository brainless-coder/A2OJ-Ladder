#include<iostream>
using namespace std;

int main() {
    int n, length;
    string word;
    cin >> n;

    while (n > 0) {
        cin >> word;
        length = word.length();

        if (length > 10) {
            cout << word[0] << (length-2) << word[length-1] << endl;
        } else {
            cout << word << endl;
        }

        n--;
    }

    return 0;
}