#include<iostream>
#include<unordered_map> // unordered_map is in <unordered_map> header
using namespace std;

int main()
{
    unordered_map<int, int> v;
    v[1] = 1;
    v[2] = 2;
    v[3] = 3;
    v[4] = 4;
    v[5] = 5;

    // Print the unordered_map (order is random)
    for(auto x : v)
    {
        cout << x.first << "  "; // only keys
    }
    cout << endl;

    // Front and back elements can't be directly accessed (no ordering)
    // But you can manually access the first element via v.begin() if needed
    if(!v.empty())
    {
        cout << v.begin()->first << endl;   // "first" element (random order)
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

    // Remove an element (say key = 4)
    v.erase(4);

    for(a
