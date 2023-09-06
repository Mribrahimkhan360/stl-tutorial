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
//
//vector <int> data = {3,3,5,6,7,8,4,3,2};
//for(int d:data)
//{
//    cout << d <<" ";
//}
//
//

//vector <int> data = {1,2,3,4,5,6,7,8,9};
//int ln = data.size();
//
//for(int i = 2; i<ln-1; ++i)
//{
//    cout << data[i] << " ";
//    // 3,4,3,4,3
//}

//vector <int> data = {1,2,3,4,5,6,7,8,9};
//
//int *d = data.data();
//cout << d[2];

///Update
//
//vector <int> data = {1,2,3,4,5,6,7,8,9};
//data[2]=8;
//print(data);

/// swap

//vector <int> data={1,3,2,4};
//vector <int> data2={7,5,6,8,9};
//
//cout << "Before swap \n";
//print(data);
//print(data2);
//
//data.swap(data2);
//cout << "after swap \n";
//print(data);
//print(data2);

///delete

vector<int>data={3,2,1,6,4,2};
cout<< "Before delete"<<endl;
print(data);
data.pop_back();


cout << "After delete\n";
print(data);


return 0;

}
