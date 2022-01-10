#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

void print_vector(vector<int> &v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}


int32_t main(){

// #ifndef
// 	freeopen("input.txt","r",stdin);
// 	freeopen("output.txt","w",stdout);
// #endif

	vector<int> first;

	vector<int> second(4,20);
	print_vector(second);

	int numbers[] = {10,20,30,40};
	vector<int> third(numbers,numbers+4);
	print_vector(third);

	vector<int> fourth(third);

	vector<int> fifth = {1,2,3,4,10};

	vector<int> arr = {1,2,3,4,10,5,6,7,8};
	cout<<arr.at(1)<<endl;
	cout<<arr.capacity()<<endl;
	cout<<arr.max_size()<<endl;

	//clear all the elements in the current vector, reduces size to 0
	arr.clear();

	// erase the 4th element
	arr.erase(arr.begin() + 3);

	//erase the range - first 3 elements
	arr.erase(arr.begin(),arr.begin() + 3);

	// reserve the size of the vector to 1000
	arr.reserve(1000);
}