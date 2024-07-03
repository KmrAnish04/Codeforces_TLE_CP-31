#include <bits/stdc++.h>
using namespace std;

int main(){
	int testCases;
	cin>>testCases;

	for (int i = 0; i < testCases; ++i)
	{
		// ************************************ Taking Inputs ************************************
		string str;
		cin>>str;



		// ************************************ Solution Here ************************************
		// cout<<str<<endl;
		int count = 0;
		for (int i = 1; i < str.length(); ++i)
		{
			if(str[i]<str[i-1]){ 
				count += 1;
			}
		}

		// if(count==0) cout<<count<<endl;
		// else cout<<count+1<<endl;

		cout<<count+1<<endl;

		// cout<<"************* End *************\n\n";

		
	}

	return 0;
}


// ************************************ INTUTION ************************************
/*
	Keep the smallest element in array 'a' and bigger elements in array 'b'.
	
*/