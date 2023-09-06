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
        ///Add Element
//    vector <int> data{1,2,3};
//    data.push_back(7);
//    data.push_back(9);
//    data.push_back(5);
//    print(data);

//vector <int> data = {1,2,3};
//data.insert(data.begin(),7);
//print(data);

//vector <int> data = {1,2,3};
//data.insert(data.begin()+1,7);
//print(data);


//vector <int> data = {1,2,3};
//data.insert(data.end()-1,7);
//print(data);

//vector <int> data = {1,7,3};
//data.insert(data.begin()+1,7);
//print(data);
//cout << data.front() +1 << endl;
//cout<< data.back() << endl;

vector <int> data = {3,3,5,6,7,8,4,3,2};
for(int d:data)
{
    cout << d <<" ";
}



    return 0;

}
