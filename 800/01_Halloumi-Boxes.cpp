#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];

        // cout<<endl;
        bool isArrSorted = true;
        for(int i=1; i<n; i++){
            // cout<<arr[i]<<",";
            if(arr[i-1]>arr[i]) isArrSorted = false; 
        }
        // cout<<endl;

        // cout<<isArrSorted<<endl;
        if(isArrSorted || k>=2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
    
    return 0;
}


/*
 *          Aproach
 * Is question, mai jyada sochne ka nhi hai. Like everytime its possible 
 * to reverse the array (weather the k is equal to length or unsorted 
 * subarray or not), even if you have less k then also you can sort array
 * of length more than k. So here the only thing we need to understand is
 * even if we have minimum k=2 also then also we can sort any array of length
 * more than 2, only thing we can't sort an array with k=1, but with k>=2 we
 * can sort any array, becoz here we are not taking care of number of reverse
 * operation we need to use we are only taking care of solving the array, with
 * less k value it will need more reverse operations but still we can solve it.
 */