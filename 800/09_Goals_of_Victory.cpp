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
	
	int diff = 0;
	for(int i=0; i<n-1; i++){
		int ele;
		cin>>ele;
		diff -= ele;
	}

	// ************************************ Solution Starts Here ************************************

	cout<<diff<<"\n";
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
	As if a team will win, it means for the winning team one point
	will get incremented to their efficiency (+1) and one point will get
	decrement for losing teams. It means if somewhere efficiency point
	is adding then it will get subtracted somewhere also. Means overall
	efficieny of all the will always be neutralize. This observation leads
	to the equation: 
	teamAEfficiency + teamBEfficiency + teamCEfficiency + .... + teamNEfficiency = 0
	
	It means, if we want to find efficiency of Team D, the it will be
	
	teamDEfficiency = -[teamAEfficiency + teamBEfficiency + teamCEfficiency + .... + teamNEfficiency]

*/
