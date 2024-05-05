#include<bits/stdc++.h>
using namespace std;


int main(){
	int noOfTestCases;
	cin>>noOfTestCases;

	for (int i = 0; i < noOfTestCases; ++i)
	{
		// ************************************ Taking Inputs ************************************
		int lengthOfStr;
		cin>>lengthOfStr;

		string str;
		cin>>str;


		// ************************************ Solutions Starts Here ************************************
		vector<int> maxAdjEmptyCells; // this vector is storing the count of adjacent empty blocks length.
		int maxEmptyCellsCounter = 0; 

		// Here we are counting and stroing the count of adjacent empty blocks lengths.
		for (int i = 0; i < lengthOfStr; ++i)
		{
			if(str[i]=='.') maxEmptyCellsCounter++;
			else{
				if(maxEmptyCellsCounter>0) maxAdjEmptyCells.push_back(maxEmptyCellsCounter);
				maxEmptyCellsCounter = 0;
			}
		}

		// If any adj. empty block continued till the end of the string then after 
		// finishing loop we need to push it manually in the vector.
		if(maxEmptyCellsCounter>0) maxAdjEmptyCells.push_back(maxEmptyCellsCounter); 


		int maxAdjEmptyCellsBlock = INT_MIN; // maximum adj empty block length
		int sumOfAllEmpAdjBlocks = 0;        // no of all the empty cells

		 // finding adj. empty block of maximum length and also no of empty cells
		for (int i = 0; i < maxAdjEmptyCells.size(); ++i)
		{
			maxAdjEmptyCellsBlock = max(maxAdjEmptyCells[i], maxAdjEmptyCellsBlock);
			sumOfAllEmpAdjBlocks += maxAdjEmptyCells[i];
		}
		
		// Case where all the empty cells needs to be filled indivially using type-1 
		// action for each cell
		if(maxAdjEmptyCellsBlock<3) cout<<sumOfAllEmpAdjBlocks<<endl; 

		// Case Where only 1st and 3rd cell needs to be filled using type-1 action 
		// and other we will fill with the help of type-2 actions and (i-1)th and 
		// (i+1)th rule.
		else cout<<2<<endl;
	}

	return 0;
}



/*
************************************ INTUTION ************************************
1. Here, type-2 action and "(i-1)th and (i+1)th cell" rule is our lovely friend, 
   with the help of type 2 acton we will perform minimum type-1 actons. Here if 
   you do some brainstroming then you will observe that there are only two type 
   of answers is possible that is weather we have to fill all the empty cells one
   by one (it means if n cells are empty then n type-1 operations needed) or otherwise
   the answer will always be 2. Because if the minimum empty cells block length is 
   more than or equal to 3 then with help of given rule which says that "ith cells 
   will get filled with water if (i-1)th and (i+1)th is filled with water. Then it 
   means if there exists adjacent empty cell blocks which is of length more than or
   equal to length 3, then we will fill 1st and 3rd empty cell and the 2nd cell will
	get filled automatically, and then with the help of type-2 action we will move 
	the water from auto filled water cell and will fill all the empty cells. In this
	way we are filling only 1st and 3rd cell, which results in two type-2 operations 
	which is minimum. 

	But if the length of maximum adjacent cell block is less than 3, then we can't do
	anything, we need to fill all the empty cells individually one by one by performing 
	type-1 actions for each empty cell.
*/