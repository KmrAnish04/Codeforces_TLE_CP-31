#include<bits/stdc++.h>
#define ll long long int 
#define INF 1000000000000000000
#define mod 1000000007
#define pb push_back
#define mk make_pair
using namespace std;


void solve(){
	// ************************************ Taking Inputs ************************************
		int n, k, x;
		cin>>n>>k>>x;


		// ************************************ Solution Starts Here ************************************
		// cout<<"\n****** Start ******\n";


		// Edge Case
		if(k==1){cout<<"NO\n"; return;} 

		if(x!=1){ // Edge Case
			cout<<"YES\n";
			cout<<n<<"\n";
			for(int i=0; i<n; i++) cout<<"1 ";
			cout<<"\n";
			return;
		}

		// Edge Case
		if(n%2 && k==2){cout<<"NO\n"; return; } 


		// For even
		if(n%2==0){  
			cout<<"YES\n";
			cout<<(n/2)<<"\n";
			for (int i = 0; i < (n/2); ++i){ cout<<"2 ";}
			cout<<"\n";
			return;
		}

		// For odd
		if(n%3==0){
			cout<<"YES\n";
			cout<<(n/3)<<"\n";
			for (int i = 0; i < (n/3); ++i){ cout<<"3 ";}
			cout<<"\n";
			return;
		}

		// For prime
		cout<<"YES\n";
		int totalTwos = (n/2)-1;
		cout<<totalTwos+1<<"\n";
		for (int i = 0; i < totalTwos; ++i){ cout<<"2 ";}
		cout<<"3 ";
		cout<<"\n";
		return;
		

		// cout<<"****** End ******\n";
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
