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

	vector<int,int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	// ************************************ Solution Starts Here ************************************
	int ans = 0;
	int odd = 0;
	int even = 0;

	for (int i = 0; i < count; ++i)
	{
		if(arr[i]%2 == 0) even++;
		else odd++;
	}

	if(odd==0 || even==0){
		cout<<0<<nl;
		return;
	}

	




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
