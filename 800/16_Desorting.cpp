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


		// ************************************ Solution Starts Here ************************************
		bool ansFound = false;
		int minDiff = INT_MAX;
		pair<int,int> elePair(0, 0);

		for (int i = 1; i < arrSize; ++i)
		{	
			if(arr[i-1] > arr[i]){
				cout<<0<<"\n"; 
				ansFound = true;
				break;
			}

			int currDiff = abs(arr[i-1] - arr[i]);
			if(currDiff < minDiff){
				minDiff = currDiff;
				elePair = {i-1, i};
			}
		}

		if(!ansFound) cout<<(minDiff/2)+1<<"\n";

		// cout<<"************* Solution Ends Here *************\n\n";
	}

	return 0;
}


// ************************************ INTUTION ************************************
/*
	1. Check is array already desorted or not, if desorted then return 0, otherwise go ahead.
	2. Find two elements in the array whose absolute difference is minimum. Let say (i, j)
	   are the index of those two elements in the array.
	4. Now Find the absolute difference of two elements, and then answer will be (diff/2)+1.
	5. Because always it takes (diff/2)+1 operations to desort the array. 
	
	**Intution**: The Basic principle here is, the two numbers which will have minimum difference 
	that can be easily swapped or desorted by performing operation, and if you are able to swap or 
	desort atleast one pair of elements, then the whole array will become desorted automatically. 
	Indirectly, the given operation in the question that is 

	* Choose an index i (1≤i≤n−1).
	* Add 1 to a1,a2,…,ai.
	* Subtract 1 from ai+1,ai+2,…,an.

	this above operation we can use it to swap or desort two number. But if we apply this operaion 
	on those two numbers which are very nearest to each other or which have minimum difference 
	then we will need very less number of operations to make the numbers swap or desorted, 
	which will make array desorted in very less operations. 

	For Example:
	Let say array is arr = [1, 15, 25, 50]
	so here the minimum difference is between 15(index=1) and 25(index=2), that is difference = 10;
	So if we perform operation here on index=1 that is 15 (please note, you need to perform
	operation on the lowest valued number only, like out of 15 and 25, perform operation on 15, 
	because we need to increase the lower value number and decrease the higher value number to 
	take both numbers closest to each other).

	Iterations: Initial stage: >> 15 , 25 
	step: 1 >> Operation on 15: (15,25) -> (16,24)
	step: 2 >> Operation on 16: (16,24) -> (17,23)
	step: 3 >> Operation on 17: (17,23) -> (18,22)
	step: 4 >> Operation on 18: (18,22) -> (19,21)
	step: 5 >> Operation on 19: (19,21) -> (20,20)
	step: 6 >> Operation on 20(left side 20): (20,20) -> (21,19)

	Now, you can see numbers are swapped or desorted, actually it is not swapped but their 
	differnce become negative (19-21 = -2), which is making our array desorted.
	So here, we took 6 number of operations which is equal to (abs difference b/w numbers / 2 ) + 1.
	that is (abs(25-15)/2)+1 ==> (10/2)+1 ==> (5)+1 ==> 6
	******************************* So Answer = 6 *******************************


*/