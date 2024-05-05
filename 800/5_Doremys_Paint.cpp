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
	
*/