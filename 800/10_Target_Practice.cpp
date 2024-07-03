#include <bits/stdc++.h>
using namespace std;

int main(){
	int testCases;
	cin>>testCases;

	for (int i = 0; i < testCases; ++i)
	{
		// cout<<"\n***** Start ******\n";
		// ************************************ Taking Inputs ************************************
		vector<string> targetBoard(10);
		for(int i=0; i<10; i++) cin>>targetBoard[i];


		// ************************************ Solution Here ************************************
		vector<pair<int,int>> limitRange = {{0,9}, {1,8}, {2,7}, {3,6}, {4,5}};

		vector<pair<int,int>> arrowIdx;
		for(int i=0; i<targetBoard.size(); i++){
			string str = targetBoard[i];
			for(int j=0; j<str.length(); j++){
				if(str[j]=='X'){
					arrowIdx.push_back({i,j});
				}
			}
		}
		
		int rst = 0;
		for(auto idxPair: arrowIdx){
			int arrowRow = idxPair.first;
			int arrowCol = idxPair.second;

			int tempRst = 0;
			for(int i=0; i<limitRange.size(); i++){
				pair<int,int> limitPair = limitRange[i];
				int minLimit = limitPair.first;
				int maxLimit = limitPair.second;

				if( arrowRow>=minLimit && 
					arrowRow<=maxLimit && 
					arrowCol>=minLimit && 
					arrowCol<=maxLimit
				) 
				{ tempRst = i+1; } // Passed 
			
			}

			rst += tempRst;
		}

		
		cout<<rst<<endl;

		
	}

	return 0;
}


// ************************************ INTUTION ************************************
/*

	
*/