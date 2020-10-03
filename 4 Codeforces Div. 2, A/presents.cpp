// Question Link: https://fontawesome.com/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (arr[j] == i+1)
                cout << (j+1) << " ";
        }
    }

    return 0;
}