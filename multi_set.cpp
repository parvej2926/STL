#include<iostream>
#include<set> // multiset is in <set> header
using namespace std;

int main()
{
    multiset<int> v;
    v.insert(1);
    v.insert(2);
    v.insert(3);
    v.insert(4);
    v.insert(5);

    // Print the multiset
    for(auto x : v)
    {
        cout << x << "  ";
    }
    cout << endl;

    // Front and back elements
    cout << *v.begin() << endl;     // smallest element
    cout << *v.rbegin() << endl;    // largest element

    if(v.empty())
    {
        cout << "empty";
    }
    else
    {
        cout << "not empty";
    }
    cout << endl;

    // Remove largest element (one occurrence only)
    auto it = v.end();
    --it;   // move to last element
    v.erase(it);

    for(auto x : v)
    {
        cout << x << "  ";
    }
    cout << endl;

    // Clear the multiset
    v.clear();

    for(auto x : v)
    {
        cout << x << "  ";
    }
    cout << endl;

    // Insert elements again
    v.insert(1);
    v.insert(2);
    v.insert(3);
    v.insert(4);
    v.insert(5);

    // Erase all occurrences of 4
    v.erase(4); // Erases ALL copies of 4
    // If you want to remove only one occurrence, need special handling

    for(auto x : v)
    {
        cout << x << "  ";
    }
    cout << endl;

    // Insert 7 copies of 4
    for(int i = 0; i < 7; ++i)
    {
        v.insert(4);
    }

    for(auto x : v)
    {
        cout << x << "  ";
    }
    cout << endl;

    // Working with two multisets
    multiset<int> v1;
    v1.insert(8);
    v1.insert(9);

    multiset<int> v2;
    v2.insert(1);
    v2.insert(2);

    swap(v1, v2); // swap the multisets

    for(auto x : v1)
    {
        cout << x << "  ";
    }
    cout << endl;

    for(auto x : v2)
    {
        cout << x << "  ";
    }
    cout << endl;

    // multiset automatically sorted - no need for manual sort
    for(auto x : v)
    {
        cout << x << "  ";
    }
    cout << endl;

    return 0;
}
