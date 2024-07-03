#include <bits/stdc++.h>
using namespace std;

int main(){
	int testCases;
	cin>>testCases;

	for (int i = 0; i < testCases; ++i)
	{
		// ************************************ Taking Inputs ************************************
		int sizeOfStr;
		string str;
		cin>>sizeOfStr;
		cin>>str;



		// ************************************ Solution Here ************************************

		// for (int i = 0; i < str.length(); ++i)
		// {
		// 	cout<<str[i];
		// }
		// cout<<"\n";

		bool isAnsFound = false;
		char preChar = str[0];
		for (int i = 1; i < str.length(); ++i)
		{
			if(preChar>str[i]){
				cout<<"NO"<<endl;
				isAnsFound = true;
				break;
			}
			preChar = str[i];
		}

		if(!isAnsFound) cout<<"YES"<<endl;

		// cout<<"************* End *************\n\n";

		
	}

	return 0;
}


// ************************************ INTUTION ************************************
/*
	
	
*/