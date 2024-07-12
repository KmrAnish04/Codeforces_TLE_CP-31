#include<bits/stdc++.h>
#define ll long long int 
#define INF 1000000000000000000
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define nl "\n"
using namespace std;


int helperForOprCnt(int num){
	if(num<=1) return 0;
	if(num==2) return 1;

	int cnt=0;
	int div = num;
	int quad = div/2;
	int rem = div%2;
	cnt += quad;

	while(quad!=1){
		div = quad + rem;
		quad = div/2;
		rem = div%2;
		cnt += quad;
	}

	div = quad + rem;
	if(div==2) cnt+=1;

	return cnt;
}


void solve(){
	// ************************************ Taking Inputs ************************************
	int sizeOfArr;
	cin>>sizeOfArr;

	vector<int> arr(sizeOfArr);
	for (int i = 0; i < sizeOfArr; ++i) cin>>arr[i];



	// ************************************ Solution Starts Here ************************************
	vector<int> groups;
	int currGrpCnt = 0;
	for (int i = 1; i < sizeOfArr; ++i){
		if( (arr[i-1]%2==0 && arr[i]%2==0) || (arr[i-1]%2!=0 && arr[i]%2!=0) ){
			currGrpCnt++;
		}
		else{ 
			groups.pb(currGrpCnt+1);
			currGrpCnt=0;
		}
	}
	if(currGrpCnt>0) groups.pb(currGrpCnt+1);


	int answer = 0;
	for (int i = 0; i < groups.size(); ++i){
		answer += helperForOprCnt(groups[i]);
	}
	cout<<answer<<nl;

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
