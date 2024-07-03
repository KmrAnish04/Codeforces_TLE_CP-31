#include <bits/stdc++.h>
using namespace std;

int main(){
	int testCases;
	cin>>testCases;

	for (int i = 0; i < testCases; ++i)
	{

		// ************************************ Taking Inputs ************************************
		int sizeOfPerm;
		cin>>sizeOfPerm;
		vector<int> arr(sizeOfPerm);
		for(int j=0; j<sizeOfPerm; j++) cin>>arr[j];

		// ************************************ Solution Here ************************************
		if(arr[0]==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}


// ************************************ INTUTION ************************************
/*
	Observation is, there is no way to swap first element due to the conditon [a1 < a2 > a3],
	it means if 1 is not at its correct postion then there is not way to place 1 at its correct
	postion. So if 1 is at wrong postion then answer is always no.
	But if other intermediate or bigger numbers are at wrong position then there is always 
	a way to place it at correct place, it can always be corrected, the only thing is we have
	to perform multiple swap operations but it can be corrected anyway.
	So, the conclusion is, if 1 is at wrong postion then answer is "No", but if other elements
	except 1 is at wrong postion then after some operations it can be correct, therefore answer
	is always "YES" if other elements except 1 is at wrong postion.
*/