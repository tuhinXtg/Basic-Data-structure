#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < sqrt(n); i++)
    {
        if(n%2 == 0)
        {
            cout << i << " " << n/i << endl;
        }
    }
    
    return 0;
}