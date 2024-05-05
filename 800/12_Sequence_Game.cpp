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
		// for(int i=0; i<arr.size(); i++) cout<<arr[i]<<endl;


		// ************************************ Solution Here ************************************
		vector<int> ansArr;
		ansArr.push_back(arr[0]);
		for(int i=1; i<arrSize; i++){
			if(arr[i]<arr[i-1]){
				ansArr.push_back(arr[i]);
			}
			ansArr.push_back(arr[i]);
		}

		cout<<ansArr.size()<<"\n";
		for(int i=0; i<ansArr.size(); i++) cout<<ansArr[i]<<" ";
		cout<<"\n";
		
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