#include <bits/stdc++.h>
using namespace std;

int main(){
	int testCases;
	cin>>testCases;

	while(testCases--)
	{
		// ************************************ Taking Inputs ************************************
		int arrSize;
		cin>>arrSize;

		vector<int> arr(arrSize);
		for (int i = 0; i < arrSize; ++i) cin>>arr[i];


		// ************************************ Solution Here ************************************
		// cout<<"************* Start *************\n";
		vector<int> prefixSum(arrSize);
		vector<int> sufixSum(arrSize);

		for (int i = 0, j=arrSize-1; i < arrSize, j>=0; ++i, --j)
		{
			// cout<<arr[i]<<", "<<arr[j]<<endl;
			if(i==0 || j==arrSize-1){
				prefixSum[i] = arr[i];
				sufixSum[j] = arr[j];
			}
			else{
				prefixSum[i] = arr[i] + prefixSum[i-1];
				sufixSum[j] = arr[j] + sufixSum[j+1];
			}
		}


		// for (int i = 0; i < arrSize; ++i) cout<<prefixSum[i]<<", ";
		// cout<<'\n';
		// for (int i = 0; i < arrSize; ++i) cout<<sufixSum[i]<<", ";

		bool isAnsFound = false;
		for (int i = 1; i < arrSize; ++i)
		{
			if( (prefixSum[i-1]%2==0 && sufixSum[i]%2==0) || (prefixSum[i-1]%2!=0 && sufixSum[i]%2!=0 ) ){
				cout<<"Yes"<<endl;
				isAnsFound = true;
				break;
			}
		}

		if(!isAnsFound) cout<<"No"<<endl;

		// cout<<"************* End *************\n\n";

		
	}

	return 0;
}


// ************************************ INTUTION ************************************
/*
	Using Concept of Prefix and Sufix Sum
	Take prefix and sufix sum of the array and then compare every corresponding element
	to check wether they both are even or odd, if one of them corresponding element is 
	even or odd then print "Yes" and break the loop, otherwise print "No".
	
*/