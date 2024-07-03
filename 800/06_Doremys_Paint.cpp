#include <bits/stdc++.h>
using namespace std;

int main(){
	int testCases;
	cin>>testCases;

	for (int i = 0; i < testCases; ++i)
	{

		// ************************************ Taking Inputs ************************************
		int sizeOfArr;
		cin>>sizeOfArr;
		vector<int> arr(sizeOfArr);
		for(int j=0; j<sizeOfArr; j++) cin>>arr[j];


		// ************************************ Solution Here ************************************
		unordered_map<int,int> mp;
		for (int k = 0; k < sizeOfArr; k++){ mp[arr[k]]++; }
		
		vector<int> newArr;
		for(auto it: mp){ newArr.push_back(it.second); }

		if(mp.size()>2) cout<<"No"<<endl;
		else if(mp.size()==1 || abs(newArr[0] - newArr[1]) <= 1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}

	return 0;
}


// ************************************ INTUTION ************************************
/*
	Here In the array, to make it good array, only two type of numbers should be 
	presetn that is 'a' and 'b', if any third type of number will be present then
	it will be impossible to make it a good array.
	Even if there are two type of numbers are present then also we can't directly 
	say that the array is good array. Even if there are two type of numers present
	we still need to check weather they are present in a balanced frequency or not.
	Because these two type of elements should be present in a frequency that there
	absoulute difference of their frequency should be 0 or 1 (or less than eqal to 1).
	
	Or In other words, you can say that one type of number should be present n/2 times 
	and other number should be present n/2 times if n is even and (n/2 + 1) times if 
	n is odd. Otherwise its answer is "No".
	Code:
	if(mp.size()>2) cout<<"No"<<endl;
	else if(
		(mp.size()==1) || 
		(sizeOfArr/2==newArr[0] && (sizeOfArr/2)+1==newArr[1]) || 
		(sizeOfArr/2==newArr[1] && (sizeOfArr/2)+1==newArr[0]) ||
		(sizeOfArr/2==newArr[0] && sizeOfArr/2==newArr[1])
	) {cout<<"Yes"<<endl;}
	else cout<<"No"<<endl;
	
*/