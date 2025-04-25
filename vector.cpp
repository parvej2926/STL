#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for(int i=0; i<v.size(); i++)
    {
       cout<< v[i]<< "  ";
    }
      cout<<endl;
      cout<< v.front()<<endl;
      cout<< v.back()<<endl;
      if(v.empty())
      {
          cout<<"empty";
      }
      else
      {
          cout<<"not empty";
      }
      cout<<endl;
      v.pop_back();
       for(int i=0; i<v.size(); i++)
    {
       cout<< v[i]<< "  ";
    }
      cout<<endl;
      v.clear();
       for(int i=0; i<v.size(); i++)
    {
       cout<< v[i];
    }
      cout<<endl;
     v.push_back(1);
     v.push_back(2);
     v.push_back(3);
     v.push_back(4);
     v.push_back(5);
     v.erase(v.begin()+3);
       for(int i=0; i<v.size(); i++)
    {
       cout<< v[i]<< "  ";
    }
      cout<<endl;

      v.insert(v.begin()+3,7,4);
       for(int i=0; i<v.size(); i++)
    {
       cout<< v[i]<< "  ";
    }
      cout<<endl;
      vector<int>v1;
      v1.push_back(8);
      v1.push_back(9);
      vector<int>v2;
      v2.push_back(1);
      v2.push_back(2);
      swap(v1,v2);
         for(int i=0; i<v1.size(); i++)
    {
       cout<< v1[i]<< "  ";
    }
      cout<<endl;
         for(int i=0; i<v2.size(); i++)
    {
       cout<< v2[i]<< "  ";
    }
      cout<<endl;
      sort(v.begin(), v.end());

         for(int i=0; i<v.size(); i++)
    {
       cout<< v[i]<< "  ";
    }
      cout<<endl;
      vector<int>:: iterator it;
      it = v.begin();
      cout<<*it<< endl;
    return 0;
}
