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

	// ************************************ Solution Starts Here ************************************
	int num = n;
	int noOfTens=0;
	while(num>=10){
		num /= 10;
		noOfTens++;
	}

	cout<<(noOfTens*9)+num<<nl;

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
	In every 10s range there are exactly 9 extremely round integers.

	[1,9] 				->	 9
	[10,99] 			->   9
	[100,999] 			->   9
	[1000,9999] 		->   9
	[10000,99999] 		->   9
	[100000,999999] 	->   9
	

	So here in any given number we need to find how many 10's are there.
	After 10's, we need to find how much is remaining extremely round integers
	are there.
	For example: In 43, there is one 10's, which is [1,9] and after that
	from 10 to 40 there are 4 more extremely round integers.
	Therefore answer = 9 + 4 = 13.

	Similarlly, In 5478, there are total three 10's,
	that is [1,9], [10,99], [100,999] and then from 1000 to 5000
	there are 5 extremely round integers,
	So answer is (9+9+9)+5 = 32
	

*/
