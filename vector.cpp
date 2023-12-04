#include<bits/stdc++.h>
using namespace std;

int main()
{
	//int ar[1000];

	vector<int> v;
	v.push_back(1); //0
	v.push_back(2); //1
	v.push_back(3); //2
	v.push_back(4); //3
	v.push_back(5); //4

	//print of all element

	// cout<<v[0]<<endl;
	// cout<<v[1]<<endl;
	// cout<<v[2]<<endl;
	// cout<<v[3]<<endl;
	// cout<<v[4]<<endl;

	// cout<<endl;
	
	// cout<<v.at(0)<<endl;
	// cout<<v.at(1)<<endl;

	// //cout<<v[5]<<endl;

	// //cout<<v.at(6)<<endl;

	// for (int i = 0; i < v.size(); i++)
	// {
	// 	/* code */
	// 	cout<<v[i]<<" ";

	// }

//front
	//cout<<v.front()<<endl;
//clear
	//v.clear();

	// if(v.empty())
	// {
	// 	cout<<"vector is empty";
	// }
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	/* code */
	// }
	// else
	// {
	// 	cout<<"vector is not empty";
	// }
	//pop_back is last value delete
	cout<<endl;
	v.pop_back();
	for (int i = 0; i < v.size(); i++)
	{
		
		cout<<v[i]<<" ";
	}

	cout<<endl;
// begin()+a means point of value we are delete the any loaction value.
	//v.erase(v.begin()+1);

	//begin+2,v.end() is select the last element the value and delete select value
	v.erase(v.begin()+2,v.end());
	

	for (int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<" ";
	}

}