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
	int n,k;
	string str;

	cin>>n>>k;
	cin>>str;
	

	// ************************************ Solution Starts Here ************************************
	unordered_map<char,int> mp;
	for (int i = 0; i < str.length(); ++i) mp[str[i]]++;

	int noOfOddChars = 0;
	for (auto i = mp.begin(); i != mp.end(); ++i) {
	  if(i->second%2 != 0) noOfOddChars++;
	}

	if(noOfOddChars - k > 1){ cout<<"No\n"; return; }

	cout<<"Yes\n";

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
	We just need to fix those characters which are occuring odd no. of times.
	Let say we found 'm' no. of characters which are occuring odd no. of times.
	Then If we need to remove at least 'm-1' characters which are occuring odd 
	no. of times then our string will become pallindromic. We are leaving one odd
	character beacuse it will not disturb pallindromic sequence and will help us to
	consume less no. of operation (i.e is K) to remove characters.
	
*/
