#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4] = {5, 4, 1, 2};
    sort(a, a + 4);
    for (auto i : a)
    {
        cout << i << " ";
    }

    vector<int> v1 = {5, 4, 1, 2};
    sort(v1.begin(), v1.end());
    for (auto i : v1)
    {
        cout << i << " ";
    }

    return 0;
}