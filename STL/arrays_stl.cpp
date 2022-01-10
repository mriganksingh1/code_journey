#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

void updateArray(array<int,6> &arr,int i,int value)
{
	arr[i] = value;
}

void printArray(const array<int,6> &arr)
{
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<< " ";
	}
	cout<<endl;
}

int32_t main(){

// #ifndef
// 	freeopen("input.txt","r",stdin);
// 	freeopen("output.txt","w",stdout);
// #endif
	
	array<int,6> arr = {1,2,3,4,5,6};
	updateArray(arr,0,100);
	printArray(arr);

	sort(arr.begin(),arr.end());
	printArray(arr);

	array<int,10> fives;
	fives.fill(5);

	for(int i=0;i<fives.size();i++)
	{
		cout<<fives[i]<<" ";
	}
	cout<<endl;

	for(int x: arr)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}