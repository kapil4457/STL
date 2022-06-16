#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // v.push_back(5);
    // v.push_back(6);
    // v.push_back(7);
    // cout << v[0] << " " << v[1] << " " << v[2] << endl;
    // cout << v.size() << endl;
    // v.pop_back();
    // cout << v.size() << endl;
    // v.push_back(1);
    // cout << v[0] << " " << v[1] << " " << v[2] << endl;
    // cout << v.size() << endl;
    // v.clear();
    // cout << v.size() << endl;

    // vector<int> v1(50);
    // vector<int> v2(50, 2);

    // // Print even elems first and then odd elems
    // vector<int> v1;
    // v1.push_back(1);
    // v1.push_back(2);
    // v1.push_back(5);
    // v1.push_back(7);
    // v1.push_back(4);

    // for (auto i : v1)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }
    // cout << endl;
    // for (auto i : v1)
    // {
    //     if (i % 2 != 0)
    //     {
    //         cout << i << " ";
    //     }
    // }

    // Iterators
    vector<int> v4 = {1, 2, 3, 4, 5};
    auto it = v4.begin();
    cout << *it << endl;
    it++;
    cout << *it << endl;
    return 0;
}