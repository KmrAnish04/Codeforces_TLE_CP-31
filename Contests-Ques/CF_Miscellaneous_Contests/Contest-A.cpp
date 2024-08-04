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

		vector<int> a(arrSize);
		vector<int> b(arrSize);

		for (int i = 0; i < arrSize; ++i) cin>>a[i];
		for (int i = 0; i < arrSize; ++i) cin>>b[i];



		// ************************************ Solution Here ************************************
		// cout<<"************* Start *************\n";
		// for(int i=0; i<arrSize; i++){
		// 	cout<<a[i]<<", ";
		// }
		// cout<<"\n";
		// for(int i=0; i<arrSize; i++){
		// 	cout<<b[i]<<", ";
		// }
		// cout<<"\n";


		int i1=0, j1=0, ans=0;
		while(j1<arrSize){
			if(a[i1] > b[j1]){
				ans++;
				j1++;
			}
			else{
				i1++;
				j1++;
			}
		}

		cout<<ans<<endl;
		// cout<<"************* End *************\n\n";

		
	}

	return 0;
}


// ************************************ INTUTION ************************************
/*
	Keep the smallest element in array 'a' and bigger elements in array 'b'.
	
*/