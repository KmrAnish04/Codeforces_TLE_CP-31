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
	int n, k;
	cin>>n>>k;

	vector<int> arr(n);
	for(int i=0; i<n; i++) cin>>arr[i];

	// ************************************ Solution Starts Here ************************************
	sort(arr.begin(), arr.end());

	int oMx = 1;
	int currMx = 1;

	for (int i = 1; i < n; ++i)
	{
		if(arr[i]-arr[i-1]<=k){
			currMx += 1;
			oMx = max(currMx, oMx);
		}
		else currMx = 1;
	}

	cout<<n-oMx<<nl;

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
	Just find the longest valid sub-array (valid sub-array is in
	which all the elements have absolute diff. less that or equal
	to k), then subtract length of longest valid sub-array and that
	will be the no. of elements that we need to remove from the 
	array to make the arrangement of problems balanced.
	
*/
