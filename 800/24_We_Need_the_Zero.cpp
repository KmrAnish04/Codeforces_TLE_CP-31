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
	
	int xorOfAll = 0;
	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		xorOfAll ^= ele;
	}
	// cout<<xorOfAll<<"\n";
	// ************************************ Solution Starts Here ************************************

	if(n%2 != 0){
		cout<<xorOfAll<<"\n";
		return;
	}
	
	if(xorOfAll==0){
		cout<<0<<"\n"; // any integer b/w 0 ≤ x < 2^8
		return;
	}

	cout<<-1<<"\n";
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
