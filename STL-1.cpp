#include<bits/stdc++.h>
using namespace std;

void print(vector<int> data)
{
    cout << "Total Element: " << data.size() << "\n";
    for(int datam:data)
    {
        cout << datam << " ";

    }
    cout << "\n\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v1{1,2,3,4,5};
    print(v1);

}
