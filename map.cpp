#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, int> v;
    v[1] = 1;
    v[2] = 2;
    v[3] = 3;
    v[4] = 4;
    v[5] = 5;

    // Print the map
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

    // Remove last element (largest key)
    auto it = v.end();
    --it;
    v.erase(it);

    for(auto x : v)
    {
        cout << x.first << "  ";
    }
    cout << endl;

    // Clear the map
    v.clear();

    for(auto x : v)
    {
