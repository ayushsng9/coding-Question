#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.pop_front();
    d.push_front(3);
    cout<<"1st index ele ="<<d.at(1)<<endl;
    cout<<"front "<<d.back()<<endl;
    cout<< " empty or not "<<d.empty()<<endl;
    cout<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    for(int i:d)
    {
        cout<<i<<" ";
    }
   cout<<d.size();
  

    }
