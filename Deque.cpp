#include<iostream>
#include<deque>
using namespace std;
int main()
{
//    deque<int> dq;
//    dq.push_back(1);
//    dq.push_back(2);
//    dq.push_back(3);
//
//    for(int i=0; i<dq.size(); i++)
//    {
//        cout<<dq[i]<<" ";
//    }
//=================================
//
//    deque<int> dq;
//    dq.push_back(1);
//    dq.push_back(2);
//    dq.push_back(3);
//
//    for(int i=0; i<dq.size(); i++)
//    {
//        cout<<dq.at(i)<<" ";
//    }

    //=================================

//    deque<int> dq;
//    dq.push_back(1);
//    dq.push_back(2);
//    dq.push_back(3);
//    dq.push_front(4);
//    dq.push_back(5);
//    dq.clear();
    deque<int> dq={1,2,3,5,6,7,8,9,10};

    for(int i=0; i<dq.size(); i++)
    {
        cout<<dq.at(i)<<" ";
    }



    cout<<endl<<" "<<"front and back";

    cout<<endl<<dq.front();
    cout<<endl<<dq.back();
    return 0;
}
