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
		for(int i=0; i<10; i++){
			cin>>targetBoard[i];
		}

		// for(int i=0; i<targetBoard.size(); i++) cout<<targetBoard[i]<<endl;


		// ************************************ Solution Here ************************************
		vector<pair<int,int>> limitRange = {{0,9}, {1,8}, {2,7}, {3,6}, {4,5}};
		// for(auto pr: limitRange) cout<<pr.first<<","<<pr.second<<endl;

		vector<pair<int,int>> arrowIdx;
		for(int i=0; i<targetBoard.size(); i++){
			string str = targetBoard[i];
			for(int j=0; j<str.length(); j++){
				if(str[j]=='X'){
					arrowIdx.push_back({i,j});
				}
			}
		}
		// for(auto pr: arrowIdx) cout<<pr.first<<","<<pr.second<<endl;
		
		int rst = 0;
		for(auto idxPair: arrowIdx){
			int arrowRow = idxPair.first;
			int arrowCol = idxPair.second;
			// cout<<"working for: "<<arrowRow<<","<<arrowCol<<endl;

			int tempRst = 0;
			int preRingSize = INT_MAX;
			for(int i=0; i<limitRange.size(); i++){
				pair<int,int> limitPair = limitRange[i];
				int minLimit = limitPair.first;
				int maxLimit = limitPair.second;
				int currRingSize = maxLimit-minLimit+1;
				// cout<<"limit: "<<minLimit<<","<<maxLimit<<endl;
				if(arrowRow>=minLimit && arrowRow<=maxLimit && arrowCol>=minLimit && arrowCol<=maxLimit && currRingSize<preRingSize){
					tempRst = i+1;
					// cout<<"Passed! "<<"RING: "<<i+1<<endl;
				}
				// else cout<<"Fail!"<<endl;
			}

			rst += tempRst;
		}

		
		cout<<rst<<endl;

		
	}

	return 0;
}


// ************************************ INTUTION ************************************
/*

12
1 5
a
aaaaa
5 5
eforc
force
2 5
ab
ababa
3 5
aba
ababa
4 3
babb
bbb
5 1
aaaaa
a
4 2
aabb
ba
2 8
bk
kbkbkbkb
12 2
fjdgmujlcont
tf
2 2
aa
aa
3 5
abb
babba
1 19
m
mmmmmmmmmmmmmmmmmmm

	
*/