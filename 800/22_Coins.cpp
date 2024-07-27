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
	ll n, k;
	cin>>n>>k;
	
	// ************************************ Solution Starts Here ************************************
	if(n%2==0){
		cout<<"YES\n";
		return;
	}

	int extra1 = n%k;
	int extra2 = n-k;

	if(extra1%2 == 0 || extra2%2 == 0){
		cout<<"YES\n";
		return;
	}


	cout<<"NO\n";
	return;

	// ************************************ Solution Ends Here ************************************
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
