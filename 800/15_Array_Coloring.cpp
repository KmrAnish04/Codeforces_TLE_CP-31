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
	The goal is to determine if we can split the array into two non-empty parts 
	such that the sums of the elements in both parts have the same parity (both 
	even or both odd). Here's the intuition:

	1. Prefix and Suffix Sums: We calculate the prefix sum (sum of elements from the 
	   start up to each position) and the suffix sum (sum of elements from the end up 
	   to each position) for the array.

	2. Check Parities: For each possible split point in the array, compare the prefix 
	   sum of the left part and the suffix sum of the right part.

	3. Parity Condition: If both sums have the same parity (both even or both odd) at 
	   any split point, it's possible to color the elements such that the sums of each 
	   color group have the same parity.

	4. Output: If such a split point is found, the answer is "YES". If no such point 
	   exists after checking all possible splits, the answer is "NO".

	By checking each possible division point in the array and ensuring both parts meet 
	the parity condition, we can determine if the array can be colored according to the 
	problem's requirements.






	
*/