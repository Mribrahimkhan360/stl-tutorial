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
    //    vector<int> data;
//    print(data);

//    vector<int> data(5, 2);
//    print(data);

//    vector<int> data({1, 2, 3, 4, 5}); /// int data[] = {1, 2, 3, 4, 5}
//    print(data);

//    vector<int> data = {1, 2, 3, 4, 5}; /// int data[] = {1, 2, 3, 4, 5}
//    print(data);

//    vector<int> data = {1, 2, 3, 4, 5}; /// int data[] = {1, 2, 3, 4, 5}
//    vector<int> data2 = data;
//    print(data2);

    vector<int> data = {1,2,3,4,5};
    vector<int> data2 = data;
    print(data2);

}
