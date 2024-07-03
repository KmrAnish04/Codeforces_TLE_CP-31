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
		unordered_map<char,int> mp;
		for (int i = 0; i < str.length(); ++i)
		{
			mp[str[i]]++;
		}

		if(mp.size()==1) cout<<"No"<<endl;

		else{
			cout<<"Yes"<<endl;
			int carry = str[1];
			str[1] = str[0];

			if(str.length()>=2){
				for (int i = 2; i < str.length(); ++i)
				{
					int temp = str[i];
					str[i] = carry;
					carry = temp;
				}
				str[0] = carry;
			}
			else{
				str[0] = str[1];
			}

			cout<<str<<endl;
			
		}

		// cout<<"************* End *************\n\n";

		
	}

	return 0;
}


// ************************************ INTUTION ************************************
/*
	Keep the smallest element in array 'a' and bigger elements in array 'b'.
	
*/