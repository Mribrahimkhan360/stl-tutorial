#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1={1,2,3,4,5};
    vector<int> v2={6,7,8,9,10};

    cout<<"Before swaping element of v1 are : " << endl;
    for(int i = 0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"Before swping element of v2 are : "<< endl;



    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    v1.swap(v2);

    cout<<"After swaping element of v1 are : " << endl;
    for(int i =0; i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    cout<<"After swaping element of v2 are";

    for(int i=0;i<v2.size();i++)

    {
        cout<<v2[i]<<" ";
    }
}
