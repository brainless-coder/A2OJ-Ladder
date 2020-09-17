// Question Link: https://a2oj.com/p?ID=6

#include <iostream>
using namespace std;

int main()
{
    int t, n, x, y;
    cin >> t;

    while (t > 0)
    {
        cin >> n >> x >> y;

        int arr[n];

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }


        if (arr[0] == x && arr[n - 1] == y)
        {
            cout << "BOTH" << endl;
        }
        else if (arr[0] == x && arr[n - 1] != y)
        {
            cout << "EASY" << endl;
        }
        else if (arr[0] != x && arr[n - 1] == y)
        {
            cout << "HARD" << endl;
        }
        else if (arr[0] != x && arr[n-1] != y) 
        {
            cout << "OKAY" << endl;
        }

        t--;
    }

    return 0;
}