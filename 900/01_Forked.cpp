#include<bits/stdc++.h>
#define ll long long int 
#define INF 1000000000000000000
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define nl "\n"
using namespace std;

vector<pair<int,int>> getKnighPossiblePositions(
	int placeA, int placeB, int moveA, int moveB
){
	vector<pair<int,int>> positions;

	auto p1 = make_pair(placeA+moveA, placeB+moveB); // Upper Right
	auto p2 = make_pair(placeA-moveA, placeB+moveB); // Upper Left
	auto p3 = make_pair(placeA+moveA, placeB-moveB); // Lower Right
	auto p4 = make_pair(placeA-moveA, placeB-moveB); // Lower Left
	positions.pb(p1);
	positions.pb(p2);
	positions.pb(p3);
	positions.pb(p4);

	if(moveA == moveB) return positions;
	
	auto p5 = make_pair(placeA+moveB, placeB+moveA); // Right Upper
	auto p6 = make_pair(placeA-moveB, placeB+moveA); // Right Lower
	auto p7 = make_pair(placeA+moveB, placeB-moveA); // Left Upper
	auto p8 = make_pair(placeA-moveB, placeB-moveA); // Left Lower
	positions.pb(p5);
	positions.pb(p6);
	positions.pb(p7);
	positions.pb(p8);

	return positions;
}


void solve(){
	// ************************************ Taking Inputs ************************************
	int KnightA, KnightB;
	int KingRow, KingCol;
	int QueenRow, QueenCol;

	cin>>KnightA>>KnightB>>KingRow>>KingCol>>QueenRow>>QueenCol;
	

	// ************************************ Solution Starts Here ************************************
	vector<pair<int,int>> posFromKing = getKnighPossiblePositions(KingRow,KingCol,KnightA,KnightB);

	int ans = 0;
	for (int i = 0; i < posFromKing.size(); ++i)
	{
		auto p = posFromKing[i];
		auto pos = getKnighPossiblePositions(p.first, p.second, KnightA, KnightB);
		for (int j = 0; j < pos.size(); ++j)
		{
			if(pos[j].first == QueenRow && pos[j].second == QueenCol) ans++;
		}
	}

	cout<<ans<<nl;
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
	1. Put the Knight at the position of king.
	2. Now from kings position, find those cells where Knight
	   can reach.
	3. Now out of above found cells see which cell is nearer to
	   the Queen's position. (Euler Distance Formula)
	4. Now from those nearer positions, find weather Knight can
	   reach to Queen or not.
	5. If yes, then increment the counter.
	

	Observations For Knight Moves: 
	If Knight can move equally in both directions, Example (2,2)
	O are the positions where Knight can reach.
	In this case Knight have 8 ways/paths to reach 4 differenct cells
						   	O--------- | ---------O
							|		   |          |
							|		   |		  |
							|		   |		  |
							|		   |		  |
							---------- - ----------
							|		   |          |
							|		   |          |
							|		   |          |
							|		   |          |
						    O--------- | ---------O



	If Knight can't move equally in both directions, Example: (2,1)
	O are the positions where Knight can reach.
	So In this case Knight can visit 8 different cells
								 O---- | -----O
							 		   |          
							O		   |		  O
							|		   |		  |
							|		   |		  |
							---------- - ----------
							|		   |          |
							|		   |          |
							O		   |          O
									   |          
							    O----- | -----O
*/
