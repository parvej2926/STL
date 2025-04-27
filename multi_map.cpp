#include<iostream>
#include<map> // multimap is in <map> header
using namespace std;

int main()
{
    multimap<int, int> v;
    v.insert({1, 1});
    v.insert({2, 2});
    v.insert({3, 3});
    v.insert({4, 4});
    v.insert({5, 5});

    // Print the multimap
    for(auto x : v)
    {
        cout << x.first << "  "; // only keys
    }
    cout << endl;

    // Front and back elements
    cout << v.begin()->first << endl;   // smallest key
    cout << (--v.end())->first << endl;  // largest key

    if(v.empty())
    {
        cout << "empty";
    }
    else
    {
        cout << "not empty";
    }
    cout << endl;

    // Remove largest element (only one occurrence)
    auto it = v.end();
    --it;
    v.erase(it);

    for(auto x : v)
    {
        cout << x.first << "  ";
    }
    cout << endl;

    // Clear the multimap
    v.clear();

    for(auto x : v)
    {
        cout << x.first << "  ";
    }
    cout << endl;

    // Insert elements again
    v.insert({1, 1});
    v.insert({2, 2});
    v.insert({3, 3});
    v.insert({4, 4});
    v.insert({5, 5});

    // Erase all entries with key=4
    v.erase(4); // removes all pairs with key=4

    for(auto x : v)
    {
        cout << x.first << "  ";
    }
    cout << endl;

    // Insert 7 copies of 4
    for(int i = 0; i < 7; ++i)
    {
        v.insert({4, 4});
    }

    for(auto x : v)
    {
        cout << x.first << "  ";
    }
    cout << endl;

    // Working with two multimaps
    multimap<int, int> v1;
    v1.insert({8, 8});
    v1.insert({9, 9});

    multimap<int, int> v2;
    v2.insert({1, 1});
    v2.insert({2, 2});

    swap(v1, v2);

    for(auto x : v1)
    {
        cout << x.first << "  ";
    }
    cout << endl;

    for(auto x : v2)
    {
        cout << x.first << "  ";
    }
    cout << endl;

    // multimap automatically sorted
    for(auto x : v)
    {
        cout << x.first << "  ";
    }
    cout << endl;

    return 0;
}
