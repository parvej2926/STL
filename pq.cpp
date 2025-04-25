// no extra header file
// same as priority queue
#include<iostream>
#include<queue>// push, empty, size,top, emplace, swap,size,
#include<algorithm>
using namespace std;
int main()
{
    priority_queue<int>v;// push and emplace are same
    v.push(1);
    v.push(2);
    v.push(3);
    v.push(4);
    v.push(5);// highest value is kept at top
    for(int i=0; i<v.size(); i++)
    {
       cout<< v.top()<< "  ";
       v.pop();
    }
      cout<<endl;
       v.push(1);
       v.push(2);
       v.push(3);
       v.push(4);
       v.push(5);
      cout<< v.top();

      if(v.empty())
      {
          cout<<"empty";
      }
      else
      {
          cout<<"not empty";
      }
      cout<<endl;
      v.pop();
     for(int i=0; i<v.size(); i++)
    {
       cout<< v.top()<< "  ";
       v.pop();
    }
      cout<<endl;
       v.push(1);
       v.push(2);
       v.push(3);
       v.push(4);
       v.push(5);
     for(int i=0; i<v.size(); i++)
    {
       cout<< v.top()<< "  ";
       v.pop();
    }

      cout<<endl;
     v.push(1);
     v.push(2);
     v.push(3);
     v.push(4);
     v.push(5);

        for(int i=0; i<v.size(); i++)
    {
       cout<< v.top()<< "  ";
       v.pop();
    }
      cout<<endl;
       v.push(1);
       v.push(2);
       v.push(3);
       v.push(4);
       v.push(5);


      queue<int>v1;
      v1.push(8);
      v1.push(9);
      queue<int>v2;
      v2.push(1);
      v2.push(2);
      v1.swap(v2);
          for(int i=0; i<v1.size(); i++)
    {
       cout<< v.top()<< "  ";
       v1.pop();
    }
          for(int i=0; i<v2.size(); i++)
    {
       cout<< v2.front()<< "  ";
       v2.pop();
    }
      cout<<endl;


    return 0;
}


