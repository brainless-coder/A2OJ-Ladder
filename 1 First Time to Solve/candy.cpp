#include<iostream>
using namespace std;

int main() {
    int t, n, k, count;
    int candy[n];
    cin >> t;

    while (t > 0) {
        count = 0;
        cin >> n >> k;

        for (int i = 0; i < n; ++i) {
            cin >> candy[i];
        }

        for (int i = 0; i < n; ++i) {
            for (; ;) {
                if (candy[i] >= k) {
                    count++;
                    candy[i] -= k;
                }
                if (candy[i] < k) {
                        break;
                }
            }
        }

        cout << count << endl;


        t--;
    }

    return 0;
}