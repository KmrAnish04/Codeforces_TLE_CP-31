#include<bits/stdc++.h>
#define ll long long int 
#define INF 1000000000000000000
#define mod 1000000007
#define pb push_back
#define mk make_pair
using namespace std;


void solve(){
	// ************************************ Taking Inputs ************************************
		int k, x;
		cin>>x>>k;


		// ************************************ Solution Starts Here ************************************
		// cout<<"\n****** Start ******\n";

		if(x%k != 0){
			cout<<1<<"\n";
			cout<<x<<"\n";
		}
		else{
			cout<<2<<"\n";
			cout<<x-1<<" "<<1<<"\n";
		}

		

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
