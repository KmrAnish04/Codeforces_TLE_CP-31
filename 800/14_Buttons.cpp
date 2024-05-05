#include <bits/stdc++.h>
using namespace std;

int main(){
	int testCases;
	cin>>testCases;

	for (int i = 0; i < testCases; ++i)
	{
		// ************************************ Taking Inputs ************************************
		int a, b, c;
		cin>>a>>b>>c;

		// ************************************ Solution Here ************************************
		a += c%2;
		if(a>b) cout<<"First"<<endl;
		else cout<<"Second"<<endl;
		
	}

	return 0;
}


/*
// ************************************ INTUTION ************************************
	Simple Maths:
	1. First both player will try to utilize the 'c' buttons, so if Anna will start then
	find wether both players will get equal number of extra buttons from 'c' or there is 
	one extra button which Anna will get in the end, if Anna will get 1 extra button from
	'c' then it means Anna has 'a' + 'extra button from c' = a1 buttons, now if this a1 
	buttons are more than Catie's buttons then Anna will win otherewise Catie wins. 
	
*/