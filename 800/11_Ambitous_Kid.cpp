#include <bits/stdc++.h>
using namespace std;

int main(){
	int size;
	cin>>size;

	vector<int> arr(size);
	for (int i = 0; i < size; ++i) cin>>arr[i];

	int ans=INT_MAX;
	for(auto el: arr){
		ans = min(ans, abs(el));
	}

	cout<<ans;

	return 0;
}


// ************************************ INTUTION ************************************
/*
	The answer is that number in the array which is is very nearest to 0, because only
	that number will get reduced to 0 in minimum operations to make the whole array
	multiplication zero. 
	
*/