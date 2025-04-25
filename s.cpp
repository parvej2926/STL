#include<iostream>
using namespace std;

int main()
{
    int s=26, guess, count=0, limit=5;
    bool ofg= false;

    while(s != guess  && !ofg)
    {
        if(count<limit)
        {
            cout<< "guess a number " << endl;
            cin >> guess;
            count++;
        }
        else
        {
            ofg= true;
        }
    }
    if(ofg)
    {
        cout<< "out of guess";
    }
    else
    {
        cout<< "you win";
    }
    return 0;
}
