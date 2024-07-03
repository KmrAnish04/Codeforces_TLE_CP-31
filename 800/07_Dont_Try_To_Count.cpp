#include <bits/stdc++.h>
using namespace std;

int main(){
	int testCases;
	cin>>testCases;

	for (int i = 0; i < testCases; ++i)
	{
		cout<<"***** Start ******\n\n";
		// ************************************ Taking Inputs ************************************
		int lenX, lenS;
		cin>>lenX;
		cin>>lenS;
		
		string x, s;
		cin>>x;
		cin>>s;

		cout<<"lengtX: "<<lenX<<", "<<"lengthS: "<<lenS<<endl;
		cout<<"x: "<<x<<", "<<"s: "<<s<<endl;


		// ************************************ Solution Here ************************************
		vector<int> arrOfIdx;
		for (int k = 0; k < lenX; k++){
			if(x[k] == s[0]) arrOfIdx.push_back(k);
		}
		cout<<"Idx: ";
		for(int m=0; m<arrOfIdx.size(); m++){
			cout<<arrOfIdx[m]<<", ";
		}
		cout<<endl;

		for(int l=0; l<arrOfIdx.size(); l++){
			cout<<"working for idx: "<<l<<endl;

			// Circular Loop
			int startIdx = arrOfIdx[l];
			int charCount = 0;
			int idx = startIdx;
			string testStr = "";
			int idx2 = 0;
			int ans = 0;

			while(x[idx] == s[idx2] && charCount<=lenS){
				if(idx>=lenX-1) ans++;
				cout<<"idxss: "<<idx<<endl;
				testStr.push_back(x[idx]);
				charCount++;
				idx++;
				idx2++;
				idx = idx%lenX;
			}

			cout<<testStr<<endl;
			cout<<charCount<<endl;
			cout<<"answer: "<<ans<<endl;

			int finalAns = lenX;
			int couter = 0;
			while(finalAns<lenS) {
				finalAns += finalAns; 
				couter++;
			}
			cout<<"Final Ans: "<<couter<<endl;

		}

		cout<<"***** Finished ******\n\n";
		
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