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
	int n, m;
	cin>>n>>m;

	string x;
	string s;
	
	cin>>x;
	cin>>s;
	// ************************************ Solution Starts Here ************************************

	for(int i=0; i<6; i++){
		if(x.find(s) != string::npos){
			cout<<i<<"\n";
			return;
		}
		x += x;
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
