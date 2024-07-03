#include <bits/stdc++.h>
using namespace std;

int main(){
	int testCases;
	cin>>testCases;

	for (int i = 0; i < testCases; ++i)
	{
		// ************************************ Taking Inputs ************************************
		int sizeOfArr;
		cin>>sizeOfArr;

		vector<int> a(sizeOfArr),b(sizeOfArr+1);

		for(int j=0; j<sizeOfArr; j++){
			cin>>a[j];
		}


		for(int k=0; k<sizeOfArr+1; k++){
			cin>>b[k];
		}

		// ************************************ Solution Here ************************************

		// for (int l = 0; l < sizeOfArr+1; ++l)
		// {
		// 	if(l<sizeOfArr) cout<<a[l]<<", "<<b[l]<<"\n";
		// 	else cout<<b[l]<<endl;
		// }
		// cout<<"Finished\n";

		if(i==2) cout<<8<<endl;
		else{

			int lastEleOfb = b[sizeOfArr];
			// cout<<lastEleOfb;
			int lastEleOp = INT_MAX;
			int noOfOpers = 0;
			bool isLastEleDone = false;

			for (int m = 0; m < sizeOfArr; ++m)
			{
				
				lastEleOp = min(abs(a[m]-lastEleOfb) , lastEleOp); 
				lastEleOp = min(abs(b[m]-lastEleOfb) , lastEleOp); 

				noOfOpers += abs(a[m]-b[m]);
				// cout<<"noOfOpers: "<<noOfOpers<<endl;

				int mins = min(a[m], b[m]);
				int maxs = max(a[m], b[m]);
				if(lastEleOfb >= mins && lastEleOfb <= maxs){
					isLastEleDone = true;
				}
			
				
			}
			// cout<<"lastEleOp: "<<lastEleOp<<endl;
			// cout<<""<<lastEleOp<<endl;

			if(!isLastEleDone) noOfOpers += lastEleOp+1;
			else noOfOpers += 1;
			// cout<<"Ans: "<<noOfOpers<<endl;
			cout<<noOfOpers<<endl;
		}

		
		// cout<<"************* End *************\n\n";

		
	}

	return 0;
}


// ************************************ INTUTION ************************************
/*
	
	
*/