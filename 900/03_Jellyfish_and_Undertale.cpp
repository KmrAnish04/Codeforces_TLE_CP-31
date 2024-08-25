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
	int a,b,n;
	cin>>a>>b>>n;
	
	ll ans = b;
	for (int i = 0; i < n; ++i)
	{
		ll x;
		cin>>x;
		ans += min(x, (ll)a-1);
	}

	// ************************************ Solution Starts Here ************************************
	
	cout<<ans<<nl;

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
