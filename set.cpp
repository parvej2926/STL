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

    for(auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << "  ";
    }
    cout << endl;

    if(!v.empty())
    {
        cout << *v.begin() << endl; // smallest element
        cout << *v.rbegin() << endl; // largest element
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

    if(!v.empty())
    {
        auto it = v.end();
