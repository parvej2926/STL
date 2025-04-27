#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << "  ";
    }
    cout << endl;

    cout << v.front() << endl;
    cout << v.back() << endl;

    if(v.empty())
    {
        cout << "empty";
    }
    else
    {
        cout << "not empty";
    }
    cout << endl;

    v.pop_back();

    for(auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << "  ";
    }
    cout << endl;

    v.clear();

    for(auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << "  ";
    }
    cout << endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    auto it = v.begin();
    advance(it, 3); // move iterator to 4th element
    v.erase(it);

    for(auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << "  ";
    }
    cout << endl;

    it = v.begin();
    advance(it, 3); // move iterator again to 4th position
    v.insert(it, 7, 4); // inserting 7 copies of 4

    while(!v.empty())
    {
        cout << v.front() << "  ";
        v.pop_front();
    }
    cout << endl;

    list<int> v1;
    v1.push_back(8);
    v1.push_back(9);

    list<int> v2;
    v2.push_back(1);
    v2.push_back(2);

    v1.swap(v2);

    for(auto it = v1.begin(); it != v1.end(); ++it)
    {
        cout << *it << "  ";
    }
    cout << endl;

    for(auto it = v2.begin(); it != v2.end(); ++it)
    {
        cout << *it << "  ";
    }
    cout << endl;

    // Note: list does not support random access iterators, so use list's sort
    v.sort();

    for(auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << "  ";
    }
    cout << endl;

    return 0;
}
