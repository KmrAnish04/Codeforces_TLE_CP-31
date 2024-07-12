#include<bits/stdc++.h>
#define ll long long int 
#define INF 1000000000000000000
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define nl "\n"
using namespace std;


void solve(){
	// ************************************ Taking Inputs ************************************
	int sizeOfArr;
	cin>>sizeOfArr;

	vector<int> arr(sizeOfArr);
	for (int i = 0; i < sizeOfArr; ++i) cin>>arr[i];

	// ************************************ Solution Starts Here ************************************
	
	int leftCnt = 0;
	int rightCnt = count(arr.begin(), arr.end(), 2);
	for (int i = 0; i < sizeOfArr; ++i){
		if(arr[i] == 2){
			leftCnt++;
			rightCnt--;
		}

		if(leftCnt == rightCnt){
			cout<<i+1<<nl;
			return;						
		}
	}
	
	cout<<-1<<nl;


	return;

	// cout<<"************* Solution Ends Here *************\n\n";
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    t=1;
    cin>>t;
    
    while(t--) solve();
}


// ************************************ INTUTION ************************************
/*

	I wasted 2 hours on this simple 10-20 mins question.

	My Mistake: Without properlly thinking about constraints, i just thought of an approach
	which is prefixProduct and sufixProduct (similar to prefixSum and sufixSum) and started
	solving. When I got the error of "Signed Interger Overflow" then I got to know that
	integer is not enough to store multiple 2's product, here again i tried to solve with
	long long int then again got same error.
	After trying with long long int, when I saw the constraints n => 2>= n <= 1000
	then I got to konw that there can be 1000 2's in the array and i have store it in
	datatype which is not possible, 2^1000 is a huge-huge value which is not possible to
	store in any datatype, so here prefixProduct method can't work.
	So always look into constraints before solving question.


	Now For right solution watch below video (simple approach, but am lazy to type approach
	here, so please see the video)
	https://www.youtube.com/watch?v=0am6-PDXmLs
*/
