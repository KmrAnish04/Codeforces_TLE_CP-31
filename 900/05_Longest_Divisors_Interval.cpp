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
	ll n;
	cin>>n;

	// ************************************ Solution Starts Here ************************************
	if(n==1){
		cout<<1<<nl;
		return;
	}

		
	ll maxInterval = INT_MIN;
	ll first = 0;
	for (ll i = 1; i <= n/2; ++i)
	{
		// cout<<"i="<<i<<nl;
		if(n%i==0){
			// cout<<"Yes\n";
			if(!first){
				// cout<<"This is first!\n";
				first = i;
			}
			maxInterval = max(i-first+1, maxInterval);
		}
		else{
			// cout<<"No\n";
			first = 0;
		}
	}

	cout<<maxInterval<<nl;

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
