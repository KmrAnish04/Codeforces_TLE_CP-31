#include<bits/stdc++.h>
#define ll long long int 
#define INF 1000000000000000000
#define mod 1000000007
#define pb push_back
#define mk make_pair
using namespace std;


void solve(){
	// ************************************ Taking Inputs ************************************
	int n;
	cin>>n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i) cin>>arr[i];


	// ************************************ Solution Starts Here ************************************
	
	int noOfOpr = 0;
	int positiveOnes = 0;
	int negativeOnes = 0;

	for (int i = 0; i < n; ++i){ 
		if(arr[i]==1) positiveOnes++;
		else negativeOnes++;
	}

	if(negativeOnes>positiveOnes){
		// Operations to satisfy 1st condition
		// that is a1+a2+…+an≥0
		noOfOpr = abs(negativeOnes-positiveOnes)/2 +
				  abs(negativeOnes-positiveOnes)%2;
	} 	
	
	// Operations to satisfy 2st condition
	// that is a1⋅a2⋅…⋅an=1
	if((negativeOnes-noOfOpr)%2!=0) noOfOpr++;

	cout<<noOfOpr<<"\n";
	

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
	Conditions: 
	1. a1 + a2 + … + an≥0;
	2. a1 ⋅ a2 ⋅ … ⋅ an=1.
		
	1. To satify 1st condition, the number of +ve 1's(+1) should  be 
	   greater than or equal -ve 1's(-1).
	   
	   so this we can acheive with the below formula:
	   ** No. of operations to make +ve 1's(+1) greater or equal to
	      -ve 1's(-1) = abs(negativeOnes-positiveOnes)/2 +
	   					abs(negativeOnes-positiveOnes)%2;

	   	How the above formula works:
	   	let say -ve count = 16 and +ve count = 7, so we need to convert
	   	the negative count to positive count
	   	so here
	   					+ | -
	   					7 | 16
	   			1.	->  8 | 15
	   			2.	->  9 | 14
	   			3.	-> 10 | 13
	   			4.	-> 11 | 12
	   			5.	-> 12 | 12  (here we need to change only 11 to 12)
	   	
	   	Total 5 operations, So here if you will observe, till the 4
	   	operations, the number of operation it took is the 
	   	(absolute difference b/w +ve & -ve count)/ 2, and fifth operation
	   	we are doing for the remainder or one -ve left  while doing 
	   	"(absolute difference b/w +ve & -ve count)/ 2", 
	   	that is abs(16-7)%2 = (9)%2 = 1
	   	So In this way, it took total 5 operations to make the +ve count
	   	more or equal to -ve count.

	2. Now, to satisfy the 2nd condition, We need to make the number
	   of -ve count even, because if the -ve count will be odd then 
	   surely the multiplication of all the +ve and -ve count will
	   result in -ve one(-1) which we don't want.
	   So here, first we need to check that after satifying
	   the first operation what is the -ve count.
	   To check that, we know that the operation we performed in 1st
	   point, are performed only on -ve 1's, Let say we performed 'n'
	   no. of operations in 1st point to convert 'n' -ve 1's to +ve 1's.
	   We can say that, current -ve 1's count = total -ve count - 'n',
	   because we converted 'n' -ve ones to +ve 1's right? so we are left
	   with only total -ve 1's - 'n', so from here we can check the current
	   count of -ve 1's after performing 'n' operations in 1st point.
	   So from here we can check that if current -ve count is odd then 
	   we need to perform one more operation to make the -ve coutn even
	   to satisfy the 2nd condition. 








*/
