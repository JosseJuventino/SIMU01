#include <iostream>

using namespace std;

#include <bits/stdc++.h>

void Movements(vector<char> s, int n)
{
    int movements = 0;

    if (s[0] == '0')
    {
        movements++;
    }
    else
    {
        movements = movements + 2;
    }

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            movements++;
        }
        else
        {
            movements = movements + 2;
        }
    }

    cout << movements << endl;
}

int main()
{
    int t = 0;

    cin >> t;

    while (t != 0)
    {
        int n;
        cin >> n;
        int movements = 0;
        vector<char> s(n);
        pair<int, int> alternances = {-1, -1};

        // 0 1 0 1 0 1 0 

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];

            if (i > 3)
            {
                int R = i - 1;
                int L = i - 2;

                if (s[L] == s[R + 1] && s[R] == s[L - 1])
                {
                    alternances.first = L;
                    alternances.second = R;
                }
            }
        }

        if (alternances.first != -1 && alternances.second != -1)
        { 
            swap(s[alternances.first], s[alternances.second]);
        }
        else if (s[0] == '1' && s[n - 1] == '0')
        {
            reverse(s.begin(), s.end());
        }

        Movements(s, n);
        t--;
    }
}
