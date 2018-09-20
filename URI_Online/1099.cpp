#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y, c = 0;
    cin >> n;


    for (int k = 1; k <=n; k++){
        cin >> x >> y;

        if (x == y)
        {
            c = 0;
            cout << c << endl;
        }

        else if (x < y)
        {
            c = 0;
            int i = x + 1;
            while (i < y)
            {
                
                if (i%2 == 1 || i%2 == -1)
                    c += i;

                i++;
            }        
            cout << c << endl;
        }
        else
        {
            c = 0;
            int j = y + 1;
            while (j < x)
            {
                
                if (j%2 == 1 || j%2 == -1)
                    c += j;

                j++;
            }
            cout << c << endl;
        
        }
    }


    return 0;
}