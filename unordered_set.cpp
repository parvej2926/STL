#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> v;
    v.insert(1);
    v.insert(2);
    v.insert(3);
    v.insert(4);
    v.insert(5);

    // Print the unordered_set
    for(auto x : v)
    {
        cout << x << "  ";
    }
    cout << endl;

    // No front() or back() functions in unordered_set
    // But we can still find min and max manually if needed
    if(!v.empty())
    {
        int mn = *v.begin();
        int mx = *v.begin();
        for(auto x : v)
        {
            mn = min(mn, x);
            mx = max(mx, x);
        }
        cout << mn << endl; // smallest
        cout << mx << endl; // largest
    }

    if(v.empty())
    {
        cout << "empty";
    }
    else
    {
        cout << "not empty";
    }
    cout << endl;

    // Remove largest element manually
    if(!v.empty())
    {
        int mx = *v.begin();
        for(auto x : v)
        {
            mx = max(mx, x);
        }
        v.erase(mx);
    }

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

    // Insert
