#include<bits/stdc++.h>
#define ll long long int 
#define INF 1000000000000000000
#define mod 1000000007
#define pb push_back
#define mk make_pair
using namespace std;


void solve(){
	// ************************************ Taking Inputs ************************************
	int a, b, c, d;
	cin>>a>>b>>c>>d;

	// cout<<a<<", "<<b<<", "<<c<<", "<<d<<"\n";
	// ************************************ Solution Starts Here ************************************
	if(d<b){
		cout<<-1<<"\n";
		return;
	}

	if(a==c && b==d){
		cout<<0<<"\n";
		return;
	}

	int ans = abs(d-b);
	pair<int,int> verticalCover{(d-b)+a, (d-b)+b};

	// cout<<"(a,b) --> ("<<a<<","<<b<<")\n";
	// cout<<"(c,d) --> ("<<c<<","<<d<<")\n";
	// cout<<"{"<<verticalCover.first<<","<<verticalCover.second<<"}\n";

	if(verticalCover.first < c){
		cout<<-1<<"\n";
		return;
	}

	ans += verticalCover.first - c;		
	cout<<ans<<"\n";
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

	Edge Cases:
	1. If (a,b)==(c,d), then return 0
	2. If d<b, it means destination point is below current position,
	   then it is not possible to reach at destination, because we
	   can't move downwards, we can only move daigonally and 
	   towards left.

	Approach:
	First, try to cover only vertical distance from your current position
	to destination position. 

	Example: 
	Let say, current postion = (1, 1)
			 destination position = (-3, 4)
	So first, cover y-axis distance, that is from (1,1) reach (4, 4),
	so here we will cover y-axis distance daigonally. Here you can see
	we covered some unneccasarrly extra horizontal distance (or +ve/right 
	x-axis distance, example (a, b) -> (a+1, b+1)) also, becasue this 
	is the only way we can cover vertical distance.

	So moving daigonally is the only way to cover vertical distance 
	of destination point. Now here first thing is, we need to add the 
	vertical distance we covered to our answer.

	As in above example we moved or coverd vertical distance from 2 to 4,
	means we covered two units, so add it to answer.
	answer = 2 (till now)

	Now after covering vertical distance, we will check that whereever
	we reached right now, from here can we reach to our destination point? 
	we need to check this because let say we reach at a point where
	our destination point is on right direction, then we can't move to right
	side because we are not allowed to move towards right side, we can 
	only move towards left and top-right-daigonally.

	So after covering vertical distance, if our destination point
	is on the left side then only it is possible to reach at destination
	point.

	Now if our destination point is on right side, then return -1 which 
	represents that it is impossible to reach destination.

	But let say after covering vetical distance, our destination point is on
	left side direction,
	Now here, we will find the distance between our current horizontal position
	to destination horizontal position.
	Means currentPoint.x - destinationPoint.x = n Units
	now add this 'n' units distance to our answer

	Lets consider obove example, 
	initial point: (1, 1)
	destinaiton point: (-3, 4)

	vertical distance covered: from (1,1) -> (4, 4)
	distance covered = 4-1 = 3
	so answer = 3 (till now)

	Now from (4, 4) we need to reach (-3, 4)
	Now find the horizontal distance from current position to destination
	so horizontal distance = 4 - (-3) = 4 + 3 = 7
	So answer = 3 + 7 = 10
	Try to make daigram on paper to visualize it move clearly.
	We are always taking a triangualer path (if destination is not
	coming in straight left line) to cover distance in minimum steps.

	

								y-axis
								|                  .
								|                .
				Reachable		|  Reachalbe   .
				Area ✅			|  Are ✅   .
								|          .
								|        .     Not
								|      .       Reachable
								|    .         Area ❌
		........................|  .
		___________________________________________________ x-axis
								|  
								|  
								|  
								|  
				Not				|           Not
				Reachable       |			Reachable
				Area ❌			|           Area ❌
								|  
								|  
								|  
								|  


*/
