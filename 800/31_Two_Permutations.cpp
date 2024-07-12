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
	int n, a, b;
	cin>>n>>a>>b;

	// ************************************ Solution Starts Here ************************************
	if(a+b >= n-1){
		if(a==n && b==n) cout<<"Yes"<<nl;
		else cout<<"No"<<nl;
	}
	else cout<<"Yes"<<nl;

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
	If was not able to understand the question properlly, like meaning
	of longest common prefix and sufix.
	So watch the video to understand question, after that I was roughly
	able to make the approach, but didn't continue making by myself. 
	Instead watched the video and verified weather the solution I am
	thinking is correct or not.
	
	Solution: https://www.youtube.com/watch?v=ONHKEG8dNHQ
*/
