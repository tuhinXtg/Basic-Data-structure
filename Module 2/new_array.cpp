#include <bits/stdc++.h>
using namespace std;
void newarray(vector<int>& a,vector<int>& b)
{
    vector<int> c;
    for(int val : b)
    {
        c.push_back(val);
    }
    for(int val : a)
    {
        c.push_back(val);
    }
    for(int val : c)
    {
        cout << val << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for (int i = 0; i < a.size(); i++)
    {
        cin >>a[i];
    }
    for (int i = 0; i < b.size(); i++)
    {
        cin >> b[i];
    }
    newarray(a,b);
    return 0;
}