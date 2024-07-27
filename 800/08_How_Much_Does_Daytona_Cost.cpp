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
	int n, k;
	cin>>n>>k;

	vector<int> arr(n);
	for (int i = 0; i < n; ++i) cin>>arr[i];
	
	// ************************************ Solution Starts Here ************************************

	for(int i=0; i<arr.size(); i++){
		if(arr[i] == k){
			cout<<"Yes\n";
			return;
		}
	}

	cout<<"No\n";
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
	Even if there is one element in the array which
	is equal to k, then it means atleast there is a
	one subsegment of size [k] in which no. of occurences
	of k is more than no. of occurences is any other element
	which is zero in case of [k] subsegment, it means answer
	Yes.
*/
