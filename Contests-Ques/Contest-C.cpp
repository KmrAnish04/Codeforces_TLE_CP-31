// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int testCases;
// 	cin>>testCases;

// 	for (int i = 0; i < testCases; ++i)
// 	{
// 		// ************************************ Taking Inputs ************************************
// 		int a, b, c, d;
// 		cin>>a>>b>>c>>d;



// 		// ************************************ Solution Here ************************************

// 		int temp1 = max(a, b);
// 		a = min(a, b);
// 		b = temp1;

// 		int temp2 = max(c, d);
// 		c = min(c, d);
// 		d = temp2;

// 		// cout<<a<<b<<c<<d<<endl;

// 		// if((b-a) > (d-c)){
// 		// 	if(c>a && d<b) cout<<"No"<<endl;
// 		// 	else cout<<"Yes"<<endl	;
// 		// }
// 		// else {
// 		// 	if(a>c && b<d) cout<<"No"<<endl;
// 		// 	else cout<<"Yes"<<endl	;
// 		// }

// 		if((c>a && d<b) || (a>c && b<d) || (b<c) || (c<b && d<a)) cout<<"No"<<endl;
// 		else cout<<"Yes"<<endl;

// 		// cout<<"************* End *************\n\n";

		
// 	}

// 	return 0;
// }


// // ************************************ INTUTION ************************************
// /*
// 	Keep the smallest element in array 'a' and bigger elements in array 'b'.
	
// */



#include <bits/stdc++.h>
using namespace std;

int main(){
	int testCases;
	cin>>testCases;

	for (int i = 0; i < testCases; ++i)
	{
		// ************************************ Taking Inputs ************************************
		int a, b;
		cin>>a>>b;



		// ************************************ Solution Here ************************************

		int temp1 = max(a, b);
		a = min(a, b);
		b = temp1;

		cout<<a<<" "<<b<<endl;

		// cout<<"************* End *************\n\n";

		
	}

	return 0;
}


// ************************************ INTUTION ************************************
/*
	Keep the smallest element in array 'a' and bigger elements in array 'b'.
	
*/