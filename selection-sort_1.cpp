#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    int a,b,c,n,p;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p;
        vec.push_back(p);
    }

    // selection sort alg

    for(int i=0; i<n; ++i)
    {
        int minIndex=i;
        for(int j=i+1;j<n;++j)
        {
            if(vec[j]<vec[minIndex])
            {
                minIndex=j;
            }
        }
        swap(vec[i],vec[minIndex]);
    }


    // Print value after sort
    for(int i=0; i<vec.size(); i++)
    {
        cout<< vec[i]<<" ";
    }
    cout<<endl;

}
