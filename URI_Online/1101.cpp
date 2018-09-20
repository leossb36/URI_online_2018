#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, sum = 0;

    while (1)
    {
        cin >> m >> n;

        if (m <= 0 || n <= 0)
        {
            break;
        }

        else
        { 
            sum = 0;            
            if (m < n)
            {
                for(int i = m; i <= n; i++)
                {
                    cout << i << " ";
                    sum += i;
                }
                cout << "Sum=" << sum << endl;

            }
            else if (n < m)
            {
                for(int j = n; j <= m; j++)
                {
                    cout << j << " ";
                    sum += j;
                }
                cout << "Sum=" << sum << endl;
            }
        }

    }
    return 0;
}