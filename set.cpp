#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    s1.insert(6);
    s1.insert(7);
    s1.insert(10);
    s1.insert(11);
    cout << s1.count(5) << endl;

    auto it = s1.begin();
    cout << *it << endl;

    auto it1 = s1.find(2);
    cout << *it1 << endl;

    s1.erase(s1.begin());

    cout << *s1.begin() << endl;
    return 0;
}