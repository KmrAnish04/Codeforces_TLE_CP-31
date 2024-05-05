#include <bits/stdc++.h>
using namespace std;

int main(){
	int testCases;
	cin>>testCases;

	for (int i = 0; i < testCases; ++i)
	{
		// ************************************ Taking Inputs ************************************
		int arrSize;
		cin>>arrSize;

		vector<int> arr(arrSize);
		for (int i = 0; i < arrSize; ++i) cin>>arr[i];


		// ************************************ Solution Here ************************************
		// cout<<"************* Start *************\n";
		vector<int> a;
		vector<int> b;

		sort(arr.begin(), arr.end());
		a.push_back(arr[0]);
		bool isarrAOpen = true;
		for(int i=1; i<arrSize; i++){
			if(isarrAOpen && arr[i-1]==arr[i]){
				a.push_back(arr[i]);
			}
			else{
				isarrAOpen = false;
				b.push_back(arr[i]);
			}
		}

		if(!b.size()) cout<<-1<<endl;
		else{
			cout<<a.size()<<" "<<b.size()<<"\n";
			for(int i=0; i<a.size(); i++) cout<<a[i]<<" ";
			cout<<"\n";
			for(int i=0; i<b.size(); i++) cout<<b[i]<<" ";
			cout<<"\n";
		}
		// cout<<"************* End *************\n\n";

		
	}

	return 0;
}


// ************************************ INTUTION ************************************
/*
	Keep the smallest element in array 'a' and bigger elements in array 'b'.
	
*/