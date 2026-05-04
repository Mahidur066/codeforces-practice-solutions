#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            if (s[i] == s[i + 1] && s[i] != s[i + 1])
            {
                count++;
                // i++;
            }
        }
    }
    cout << count << endl;

    return 0;
}