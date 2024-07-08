#include<bits/stdc++.h>
#define ll long long int 
#define INF 1000000000000000000
#define mod 1000000007
#define pb push_back
#define mk make_pair
using namespace std;


void solve(){
	// ************************************ Taking Inputs ************************************
	int n;
	cin>>n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i) cin>>arr[i];


	// ************************************ Solution Starts Here ************************************
	
	for (int i = 0; i < n; ++i)
	{
		cout<<n+1-arr[i]<<" ";
	}
	cout<<"\n";

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

*/
