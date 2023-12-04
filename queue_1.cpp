#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    if(q.empty())
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Not Empty "<<endl;
    }
    cout<<q.back()<<endl;
    return 0;
}
