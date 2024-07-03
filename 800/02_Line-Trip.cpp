#include<bits/stdc++.h>
using namespace std;


int main(){
	int noOfTestCases;
	cin>>noOfTestCases;

	for (int i = 0; i < noOfTestCases; ++i)
	{
		// ************************************ Taking Inputs ************************************
		int noOfGasStations, destinatonPoint;
		cin>>noOfGasStations;
		cin>>destinatonPoint;
		vector<int> gasStations(noOfGasStations);
		for (int j = 0; j < noOfGasStations; ++j) cin>>gasStations[j];


		// ************************************ Solutions Starts Here ************************************
		int btwMax=gasStations[0]; // If only one gas station available then consider it
		for (int k = 1; k < noOfGasStations; ++k) btwMax = max(gasStations[k]-gasStations[k-1], btwMax); // Maximum distance to be covered, or minimum vol req. for tank in between 
		int destMax = 2 * (destinatonPoint - gasStations[noOfGasStations-1]); // Minimum vol req. to reach destination point and came back to nearest gas staton
		int minVol = max(destMax, btwMax); // Wherever (between way or destination) we need to cover max distance without gas stations is our answer
		cout<<minVol<<endl; // Answer
	}

	return 0;
}



/*
************************************ INTUTION ************************************

1. Finding the max distance between the gas stations, because the longer distance we need to 
   cover between the gas stations, that minimum gas tank volume we need to store the gas feul.
2. At destination point, we need to reach destination and came back to last gas station(to come 
   back to starting point), for that we are finding the distance between last gas station and 
   destination point and then multiplying it with 2, because to came back to starting point we 
   need to first reach destination and then came back to nearst gas statons from destination 
   point and then from there we can came back to starting point.
3. Edge Case: If there is only one gas station in way, then between way we have only that much max distance to
   cover in mid way. Therefore 'int btwMax=gasStations[0];'
   
*/