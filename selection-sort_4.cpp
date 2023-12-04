#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    int n,p;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        vec.push_back(p);
    }

    // selection sort alg
/*
    for(int i=0; i<n; i++)
    {
        int minIndex=i;
        for(int j=1+i; j<n; j++)
        {
            if(vec[j],vec[minIndex])
            {
                minIndex=j;
            }
        }
        swap(vec[i],vec[minIndex]);
    }*/

    for(int i=0; i<n; i++)
    {
        int minIndex=i;
        for(int j=1+i; j<n; j++)
        {
            if(vec[j],vec[minIndex])
            {
                minIndex=j;
            }
        }
        swap(vec[i],vec[minIndex]);
    }
    //
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
}
