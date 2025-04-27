#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> v;
    v.insert(1);
    v.insert(2);
    v.insert(3);
    v.insert(4);
    v.insert(5);

    // Print the set
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

    // Remove last element (largest)
    auto it = v.end();
    --it;   // move to last element
    v.erase(it);

    for(auto x : v)
    {
        cout << x << "  ";
    }
    cout << endl;

    // Clear the set
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

    // Erase 4
    v.erase(4);

    for(auto x : v)
    {
        cout << x << "  ";
    }
    cout << endl;

    // Insert 7 copies of 4
    for(int i = 0; i < 7; ++i)
    {
        v.insert(4); // only 1 will be inserted because set doesn't allow duplicates
    }

    for(auto x : v)
    {
        cout << x << "  ";
    }
    cout << endl;

    // Working with two sets
    set<int> v1;
    v1.insert(8);
    v1.insert(9);

    set<int> v2;
    v2.insert(1);
    v2.insert(2);

    swap(v1, v2); // swap the sets

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

    // Set already sorted - no need to sort manually
    for(auto x : v)
    {
        cout << x << "  ";
    }
    cout << endl;

    return 0;
}
