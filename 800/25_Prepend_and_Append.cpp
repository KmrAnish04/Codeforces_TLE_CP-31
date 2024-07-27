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
	
	string str;
	cin>>str;

	// ************************************ Solution Starts Here ************************************

	int left=0, right=n-1;
	while(left<right){
		if(str[left] == str[right]){
			cout<<right-left+1<<"\n";
			return;
		}
		left++;
		right--;
	}

	if(left==right){
		cout<<1<<"\n";
		return;
	}

	// only case left when left>right
	cout<<0<<"\n";
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
	Simple Two Pointers Approach
*/
