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
	int n;
	cin>>n;
	
	vector<int> arr(n);	
	for (int i = 0; i <= n; ++i) cin>>arr[i];

	// ************************************ Solution Starts Here ************************************
	
	if(n%2 == 0){
		cout<<2<<nl;
		cout<<1<<" "<<n<<nl;
		cout<<1<<" "<<n<<nl;
		return;
	}

	cout<<4<<nl;
	cout<<1<<" "<<n-1<<nl;
	cout<<1<<" "<<n-1<<nl;
	cout<<n-1<<" "<<n<<nl;
	cout<<n-1<<" "<<n<<nl;
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
	
	
*/
