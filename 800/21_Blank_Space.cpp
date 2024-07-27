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
	
	string str="";
	for(int i=0; i<n; i++){
		int bit;
		cin>>bit;
		str += to_string(bit);
	}

	// ************************************ Solution Starts Here ************************************

	int maxTillNow = INT_MIN;
	int currMax = 0;
	for(int i=0; i<str.length(); i++){
		if(str[i]=='1'){
			if(currMax>0){
				maxTillNow = max(maxTillNow, currMax);
				currMax=0;
			}
		}
		else currMax++;

	}
	
	if(currMax>0) maxTillNow = max(maxTillNow, currMax);
	if(maxTillNow==INT_MIN) maxTillNow=0;
	
	cout<<maxTillNow<<"\n";
	return;

	// ************************************ Solution Ends Here ************************************
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
